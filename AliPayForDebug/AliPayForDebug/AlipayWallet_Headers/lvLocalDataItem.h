//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LvLocalData;

@interface lvLocalDataItem : NSObject
{
    _Bool _isIvar;
    void *_itemName;
    LvLocalData *_setMethodId;
    LvLocalData *_getMethodId;
}

+ (id)genLocalDataItem:(const char *)arg1 class:(Class)arg2;
@property(nonatomic) _Bool isIvar; // @synthesize isIvar=_isIvar;
@property(retain, nonatomic) LvLocalData *getMethodId; // @synthesize getMethodId=_getMethodId;
@property(retain, nonatomic) LvLocalData *setMethodId; // @synthesize setMethodId=_setMethodId;
@property(nonatomic) void *itemName; // @synthesize itemName=_itemName;
- (void)dealloc;
- (_Bool)localDataItem:(id)arg1 result:(void *)arg2;
- (_Bool)setLocalDataItem:(id)arg1;

@end

