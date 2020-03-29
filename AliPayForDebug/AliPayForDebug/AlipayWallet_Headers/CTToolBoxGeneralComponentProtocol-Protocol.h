//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol CTToolBoxGeneralComponentLayoutDelegate, CTToolBoxGeneralComponentSessionDelegate;

@protocol CTToolBoxGeneralComponentProtocol <NSObject>
+ (double)defautHeight;
@property(nonatomic) __weak id <CTToolBoxGeneralComponentSessionDelegate> sessionDelegate;
@property(nonatomic) __weak id <CTToolBoxGeneralComponentLayoutDelegate> layoutDelegate;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(NSDictionary *)arg2;

@optional
- (void)emojiTextViewHasText:(_Bool)arg1;
- (void)reloadToolBoxAppWithAppId:(NSString *)arg1;
- (void)updateToolBoxAppWithAppId:(NSString *)arg1 progress:(double)arg2;
- (void)refreshToolBoxAppCenterData:(NSArray *)arg1 stageCode:(NSString *)arg2;
@end

