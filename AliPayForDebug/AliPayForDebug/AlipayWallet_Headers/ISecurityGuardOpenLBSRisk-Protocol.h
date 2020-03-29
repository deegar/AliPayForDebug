//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOpenSecurityGuardPluginInterface-Protocol.h"
#import "NSObject-Protocol.h"

@class CLLocation, NSDictionary, NSString;

@protocol ISecurityGuardOpenLBSRisk <NSObject, IOpenSecurityGuardPluginInterface>
- (_Bool)clearLocationData:(id *)arg1;
- (NSString *)getLocationData:(int)arg1 error:(id *)arg2;
- (_Bool)putLocationData:(CLLocation *)arg1 error:(id *)arg2;
- (_Bool)initLbsManager:(NSDictionary *)arg1 error:(id *)arg2;
@end

