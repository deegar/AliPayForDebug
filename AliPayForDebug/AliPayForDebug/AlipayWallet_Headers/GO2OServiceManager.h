//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GO2OServiceManager : NSObject
{
    NSDictionary *_services;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (id)findServiceByName:(id)arg1;

@end

