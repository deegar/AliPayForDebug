//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RVDConfigProtocol;

@interface RVDBLELogUtils : NSObject
{
    id <RVDConfigProtocol> _configDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <RVDConfigProtocol> configDelegate; // @synthesize configDelegate=_configDelegate;
- (void).cxx_destruct;
- (void)writeErrLog:(id)arg1 error:(id)arg2;
- (void)writeTimeLog:(id)arg1;
- (void)writeLog:(id)arg1 exInfos:(id)arg2;
- (void)logToFile:(id)arg1;

@end

