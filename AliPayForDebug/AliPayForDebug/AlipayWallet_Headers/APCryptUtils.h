//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APCryptUtils : NSObject
{
    unsigned long long _handle;
}

+ (id)shareInstance;
@property unsigned long long handle; // @synthesize handle=_handle;
- (id)deCryptSM4:(id)arg1 deKey:(id)arg2;
- (id)enCryptSM4:(id)arg1 srcKey:(id)arg2;
- (id)deCryptRPC:(id)arg1 deKey:(id)arg2;
- (void)enCryptRPC:(id)arg1 type:(int)arg2 secKey:(id *)arg3 secData:(id *)arg4 deKey:(id *)arg5;
- (id)init;

@end

