//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NADOptions : NSObject
{
    _Bool _isDebugSource;
    _Bool _isPrefer;
    _Bool _hasVerified;
    NSString *_appId;
    NSString *_scene;
    NSString *_version;
    NSString *_nbtoken;
    NSDictionary *_params;
}

+ (id)optinsWithParams:(id)arg1;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool hasVerified; // @synthesize hasVerified=_hasVerified;
@property(nonatomic) _Bool isPrefer; // @synthesize isPrefer=_isPrefer;
@property(nonatomic) _Bool isDebugSource; // @synthesize isDebugSource=_isDebugSource;
@property(retain, nonatomic) NSString *nbtoken; // @synthesize nbtoken=_nbtoken;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

