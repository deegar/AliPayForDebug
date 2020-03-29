//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LogDispatcher-Protocol.h"

@class AIXAutomaticCollectionInfo, NSString;

@interface AIXAutomaticCollectionObserver : NSObject <LogDispatcher>
{
    AIXAutomaticCollectionInfo *_observerInfo;
}

+ (_Bool)addObserverWithInfo:(id)arg1;
@property(retain, nonatomic) AIXAutomaticCollectionInfo *observerInfo; // @synthesize observerInfo=_observerInfo;
- (void).cxx_destruct;
- (id)filteredActionIds;
- (void)onLogAppend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

