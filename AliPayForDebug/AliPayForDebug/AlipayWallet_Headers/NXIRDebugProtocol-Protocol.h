//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NXIRDebugProtocol <NSObject>
- (NSString *)sceneForApp:(NSString *)arg1;
- (int)appType:(NSString *)arg1;
- (_Bool)isNebulaApp:(NSString *)arg1 nebulaVersion:(id *)arg2;
- (_Bool)enableDebugApp:(NSString *)arg1;
@end

