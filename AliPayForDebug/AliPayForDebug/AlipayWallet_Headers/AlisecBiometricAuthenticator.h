//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AlisecBiometricAuthenticator : NSObject
{
}

+ (void)presentToastWithText:(id)arg1 during:(long long)arg2;
+ (void)eval:(id)arg1 callback:(CDUnknownBlockType)arg2 context:(id)arg3 src:(id)arg4;
+ (void)eval:(id)arg1 reasonTitle:(id)arg2 cancelTitle:(id)arg3 callback:(CDUnknownBlockType)arg4 src:(id)arg5;
+ (int)isBiometricAvailable;
+ (int)getSupportBioTypeInternal;
+ (int)getSupportBioType;

@end

