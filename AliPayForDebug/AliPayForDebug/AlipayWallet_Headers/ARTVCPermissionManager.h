//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARTVCPermissionManager : NSObject
{
    _Bool _bothAVAuthorized;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool bothAVAuthorized; // @synthesize bothAVAuthorized=_bothAVAuthorized;
- (void)reuqestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reuqestPermissionForMediaType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

