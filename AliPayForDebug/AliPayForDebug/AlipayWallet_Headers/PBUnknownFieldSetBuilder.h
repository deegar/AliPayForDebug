//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageBuilder-Protocol.h"

@class NSMutableDictionary, NSString, PBMutableField;

@interface PBUnknownFieldSetBuilder : NSObject <PBMessageBuilder>
{
    NSMutableDictionary *fields;
    int lastFieldNumber;
    PBMutableField *lastField;
}

@property(retain) PBMutableField *lastField; // @synthesize lastField;
@property int lastFieldNumber; // @synthesize lastFieldNumber;
@property(retain) NSMutableDictionary *fields; // @synthesize fields;
- (void).cxx_destruct;
- (id)clear;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (_Bool)mergeFieldFrom:(int)arg1 input:(id)arg2;
- (id)mergeVarintField:(int)arg1 value:(int)arg2;
- (id)mergeFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromInputStream:(id)arg1;
- (id)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromData:(id)arg1;
- (id)mergeUnknownFields:(id)arg1;
- (id)mergeField:(id)arg1 forNumber:(int)arg2;
- (_Bool)hasField:(int)arg1;
- (id)setUnknownFields:(id)arg1;
- (id)unknownFields;
- (id)defaultInstance;
- (_Bool)isInitialized;
- (id)clone;
- (id)buildPartial;
- (id)build;
- (id)getFieldBuilder:(int)arg1;
- (id)addField:(id)arg1 forNumber:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

