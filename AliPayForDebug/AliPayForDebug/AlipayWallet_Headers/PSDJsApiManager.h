//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PSDJsApiManager : NSObject
{
    NSString *_scope;
    NSMutableArray *_jsApiGroups;
}

@property(retain, nonatomic) NSMutableArray *jsApiGroups; // @synthesize jsApiGroups=_jsApiGroups;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (id)jsApis;
- (id)jsApis:(id)arg1;
- (id)jsApi:(id)arg1;
- (id)jsApi:(id)arg1 groupId:(id)arg2;
- (void)unregisterJsApis:(id)arg1;
- (void)unregisterJsApi:(id)arg1;
- (void)unregisterJsApi:(id)arg1 groupId:(id)arg2;
- (void)registerJsApis:(id)arg1;
- (void)registerJsApis:(id)arg1 groupId:(id)arg2;
- (void)registerJsApi:(id)arg1;
- (void)mainThreadCall:(CDUnknownBlockType)arg1;
- (void)registerJsApi:(id)arg1 groupId:(id)arg2;
- (void)registerDefaultJsApis;
- (id)psdJsApi:(id)arg1;
- (id)jsApiGroup:(id)arg1;
- (id)init;

@end

