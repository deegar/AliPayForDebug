//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol APSKShareServiceDelegate <NSObject>

@optional
- (void)shareServiceDidFinish:(_Bool)arg1 channel:(NSString *)arg2 err:(NSError *)arg3;
- (void)shareServiceDidSelectChannel:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end
