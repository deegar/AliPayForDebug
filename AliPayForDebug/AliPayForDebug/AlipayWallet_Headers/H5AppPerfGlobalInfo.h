//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface H5AppPerfGlobalInfo : NSObject
{
    NSString *_appUniqueId;
}

+ (id)currentUniqueId;
+ (id)shared;
@property(retain, nonatomic) NSString *appUniqueId; // @synthesize appUniqueId=_appUniqueId;
- (void).cxx_destruct;
- (void)clearAppUniqueId;
- (void)refreshAppUniqueId:(id)arg1 version:(id)arg2 releaseType:(id)arg3;
- (id)init;

@end

