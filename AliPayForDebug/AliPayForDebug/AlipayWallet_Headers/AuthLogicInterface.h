//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VIModule;

@interface AuthLogicInterface : NSObject
{
    VIModule *_module;
}

+ (id)getEnvData;
@property(nonatomic) __weak VIModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)verifySimResult:(id)arg1 WithCallback:(CDUnknownBlockType)arg2;
- (void)verifySimParams:(id)arg1 WithCallback:(CDUnknownBlockType)arg2;

@end

