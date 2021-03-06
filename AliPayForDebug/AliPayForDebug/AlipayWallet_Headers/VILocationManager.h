//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface VILocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_innerManager;
    CDUnknownBlockType _handler;
}

+ (void)stop;
+ (_Bool)locationServicesEnabled;
+ (void)currentLocation:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) CLLocationManager *innerManager; // @synthesize innerManager=_innerManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getGps:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

