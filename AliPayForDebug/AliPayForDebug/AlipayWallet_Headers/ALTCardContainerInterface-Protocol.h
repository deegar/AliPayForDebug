//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol ALTCardContainerInterface <NSObject>
- (void)refreshContainer:(_Bool)arg1;
- (void)setCardSize:(struct CGSize)arg1;
- (UIView *)getView;
- (void)bindData:(id)arg1;
- (id)initWithUrl:(NSString *)arg1 cardSize:(struct CGSize)arg2;
@end

