//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;
@protocol CTTopBannerGeneralComponentLayoutDelegate, CTTopBannerGeneralComponentSessionDelegate;

@protocol CTTopBannerGeneralComponentProtocol <NSObject>
@property(nonatomic) __weak id <CTTopBannerGeneralComponentSessionDelegate> sessionDelegate;
@property(nonatomic) __weak id <CTTopBannerGeneralComponentLayoutDelegate> layoutDelegate;
- (void)topBannerDidClose;
- (void)topBannerComponentFullScreenmMode;
- (void)formatBeforeFullScreen;
- (void)formatBeforeHalfScreen;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(NSDictionary *)arg2;

@optional
- (void)updateParamsDict:(NSDictionary *)arg1;
- (void)refreshWithData:(NSDictionary *)arg1;
- (void)refreshComponentWithData:(NSArray *)arg1;
@end
