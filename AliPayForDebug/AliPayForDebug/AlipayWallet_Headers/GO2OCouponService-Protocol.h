//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OService-Protocol.h"

@class GO2OCouponRequest, GO2OServiceCaller;

@protocol GO2OCouponService <GO2OService>
- (GO2OServiceCaller *)promoPageDataWithController:(id)arg1 request:(GO2OCouponRequest *)arg2 onSuccess:(void (^)(id))arg3 onFailure:(void (^)(GO2OServiceError *))arg4;
@end

