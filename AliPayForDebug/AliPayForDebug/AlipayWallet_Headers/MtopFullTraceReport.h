//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MtopFullTraceReport : NSObject
{
    Class _fullTraceClazz;
    Class _launchTypeClazz;
}

+ (id)sharedInstance;
@property(retain, nonatomic) Class launchTypeClazz; // @synthesize launchTypeClazz=_launchTypeClazz;
@property(retain, nonatomic) Class fullTraceClazz; // @synthesize fullTraceClazz=_fullTraceClazz;
- (void).cxx_destruct;
- (id)fetchLaunchObj;
- (id)getFullTraceID;
- (void)reportTraceData:(id)arg1;
- (void)reportTraceData:(id)arg1 response:(id)arg2;
- (id)init;

@end

