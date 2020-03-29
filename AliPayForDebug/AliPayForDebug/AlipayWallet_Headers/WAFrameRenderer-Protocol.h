//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIView;

@protocol WAFrameRenderer <NSObject>
@property(copy, nonatomic) CDUnknownBlockType frameCallback;
@property(nonatomic) _Bool manuallyRender;
@property _Bool disabled;
@property(readonly) NSString *name;
@property(readonly) UIView *view;
- (void)updateFilters:(NSArray *)arg1;
- (_Bool)setFilters:(NSArray *)arg1 withSource:(NSString *)arg2 error:(id *)arg3;
- (void)resize:(struct CGSize)arg1;
- (void)setTexcoordData:(NSArray *)arg1;
- (void)updatePixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 name:(NSString *)arg2;
- (void)invalid;
@end

