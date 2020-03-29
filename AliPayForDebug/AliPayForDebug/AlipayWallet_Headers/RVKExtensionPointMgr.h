//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface RVKExtensionPointMgr : NSObject
{
    NSString *_scope;
    NSMutableSet *_extensionsSet;
    NSMutableDictionary *_extensionsData;
}

@property(retain, nonatomic) NSMutableDictionary *extensionsData; // @synthesize extensionsData=_extensionsData;
@property(retain, nonatomic) NSMutableSet *extensionsSet; // @synthesize extensionsSet=_extensionsSet;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (void)unregisterExtension:(Class)arg1;
- (id)findScopeExtensionsWithPoint:(id)arg1;
- (void)registerExtension:(Class)arg1;
- (id)initWithScope:(id)arg1;

@end

