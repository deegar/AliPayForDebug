//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VZMistPageRouteItem : NSObject
{
    NSString *_target;
    NSString *_jsFileName;
    NSString *_jsFileInfo;
    NSString *_bundleName;
    NSString *_otherSchemeOptions;
}

+ (id)itemWithTarget:(id)arg1 jsFileName:(id)arg2 jsFileInfo:(id)arg3 bundleName:(id)arg4 options:(id)arg5;
@property(retain, nonatomic) NSString *otherSchemeOptions; // @synthesize otherSchemeOptions=_otherSchemeOptions;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain, nonatomic) NSString *jsFileInfo; // @synthesize jsFileInfo=_jsFileInfo;
@property(retain, nonatomic) NSString *jsFileName; // @synthesize jsFileName=_jsFileName;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
- (void).cxx_destruct;

@end
