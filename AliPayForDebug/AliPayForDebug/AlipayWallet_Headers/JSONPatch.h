//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JSONPatch : NSObject
{
}

+ (_Bool)applyJSONPatchOp:(unsigned long long)arg1 forKey:(id)arg2 value:(id)arg3 toMutableDictionary:(id)arg4;
+ (_Bool)applyJSONPatchOp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 value:(id)arg3 toMutableArray:(id)arg4;
+ (unsigned long long)indexOfObjectWithPathComponent:(id)arg1 inArray:(id)arg2;
+ (_Bool)applyJSONPatchOperation:(id)arg1 toJSONObject:(id)arg2;
+ (_Bool)applyOperations:(id)arg1 toJSONString:(id)arg2 result:(id *)arg3;
+ (_Bool)supportsVersion:(id)arg1;

@end

