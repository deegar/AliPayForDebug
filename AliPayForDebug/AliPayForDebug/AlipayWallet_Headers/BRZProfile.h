//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRZDeviceDataManager, NSData;

@interface BRZProfile : NSObject
{
    _Bool _mockupMode;
    NSData *_privateKey;
    BRZDeviceDataManager *_deviceManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BRZDeviceDataManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(nonatomic) _Bool mockupMode; // @synthesize mockupMode=_mockupMode;
- (void).cxx_destruct;
- (id)init;

@end

