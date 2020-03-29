//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APPreferencesAccessor, NSMutableDictionary;

@interface NBDebugAppPreferManager : NSObject
{
    NSMutableDictionary *_preferlist;
    APPreferencesAccessor *_dataAccessor;
}

@property(retain, nonatomic) APPreferencesAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property(retain, nonatomic) NSMutableDictionary *preferlist; // @synthesize preferlist=_preferlist;
- (void).cxx_destruct;
- (void)save;
- (void)removeAppId:(id)arg1;
- (id)preferModelForApp:(id)arg1;
- (void)addInfo:(id)arg1;
- (_Bool)needUsePreferApp:(id)arg1 params:(id)arg2 preferModel:(id *)arg3;
- (id)init;

@end

