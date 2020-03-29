//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class AMRPCStreamNode, NSLock;

@interface AMRPCStreamManager : NSObject <NSFastEnumeration>
{
    AMRPCStreamNode *_header;
    AMRPCStreamNode *_laster;
    struct __CFDictionary *_nodesByStreamId;
    struct __CFDictionary *_nodesByProtocol;
    unsigned long long _count;
    NSLock *_dataLock;
}

@property(retain, nonatomic) NSLock *dataLock; // @synthesize dataLock=_dataLock;
- (void).cxx_destruct;
- (void)closeWithStreamId:(unsigned int)arg1 error:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_removeListNode:(id)arg1;
- (void)removeStreamForProtocol:(id)arg1;
- (void)removeStreamWithStreamId:(unsigned int)arg1;
- (void)_addListNode:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)init;

@end

