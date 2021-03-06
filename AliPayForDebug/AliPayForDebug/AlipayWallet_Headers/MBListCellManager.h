//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface MBListCellManager : NSObject
{
    _Bool _heightCacheOpen;
    NSArray *_dataArray;
    NSMutableDictionary *_heightDict;
}

@property(retain, nonatomic) NSMutableDictionary *heightDict; // @synthesize heightDict=_heightDict;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)arg1 andTableView:(id)arg2 cellDelegate:(id)arg3;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)cellModelWithIndexPath:(id)arg1;
- (Class)cellClassWithModel:(id)arg1;
- (id)init;

@end

