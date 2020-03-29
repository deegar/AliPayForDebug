//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVKExtensionDataStorageProtocol-Protocol.h"

@class NSString, RVKNode;

@interface RVKExtensionDataStorage : NSObject <RVKExtensionDataStorageProtocol>
{
    RVKNode *_node;
    Class _dataTypeClass;
}

@property(retain, nonatomic) Class dataTypeClass; // @synthesize dataTypeClass=_dataTypeClass;
@property(nonatomic) __weak RVKNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)getData;
- (id)initWithNode:(id)arg1 dataTypeClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

