//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RVPBaseAuthGuideManager : NSObject
{
    NSArray *_authCodes;
}

@property(retain, nonatomic) NSArray *authCodes; // @synthesize authCodes=_authCodes;
- (void).cxx_destruct;
- (long long)typeForAuthCode:(id)arg1;
- (id)authCodeForType:(long long)arg1;
- (_Bool)tryToShowGuideWithAuthType:(long long)arg1 business:(id)arg2 options:(id)arg3;
- (id)init;

@end

