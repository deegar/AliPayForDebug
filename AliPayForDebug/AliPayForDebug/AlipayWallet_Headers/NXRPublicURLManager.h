//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NXRPublicURLManager : NSObject
{
    NSMutableDictionary *_publicURLs;
    NSMutableDictionary *_appIds;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *appIds; // @synthesize appIds=_appIds;
@property(retain, nonatomic) NSMutableDictionary *publicURLs; // @synthesize publicURLs=_publicURLs;
- (void).cxx_destruct;
- (_Bool)publicURLSwitcher:(id)arg1;
- (void)updatePublicURLsFromNotification:(id)arg1;
- (id)appIdFromURL:(id)arg1;
- (void)updatePublicURLs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

