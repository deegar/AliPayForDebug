//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OnsitePaySafeService-Protocol.h"

@class NSString;

@interface OnsitePaySafeServiceImpl : NSObject <OnsitePaySafeService>
{
}

- (void)willDestroy;
- (id)getSMKey;
- (id)getSMKeyWithFirst:(_Bool)arg1;
- (id)SMDecrypt:(id)arg1;
- (id)SMEncrypt:(id)arg1 withFirst:(_Bool)arg2;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)encryptWithSecurityGuard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

