//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol O2OConfigServiceProtocol <NSObject>
- (id)getConfigByGroupName:(NSString *)arg1 key:(NSString *)arg2 defaultConfig:(id)arg3 successCallback:(void (^)(_Bool, id))arg4;
@end

