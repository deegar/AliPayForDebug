//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIControl, UIView;
@protocol SPICardContainer;

@protocol SPIPluggableCard <NSObject>
- (UIControl *)controlWithTag:(long long)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (UIView *)viewForCard;
- (double)heightForCard;
- (long long)getTag;
- (void)setTag:(long long)arg1;
- (void)setCardContainer:(id <SPICardContainer>)arg1;

@optional
- (id)getUserData;
- (void)setUserData:(id)arg1;
@end

