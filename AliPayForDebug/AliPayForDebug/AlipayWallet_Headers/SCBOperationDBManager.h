//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSLock;

@interface SCBOperationDBManager : NSObject
{
    NSLock *dblock;
    APCustomStorage *_storage;
}

@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)getLocalEhMessage;
- (_Bool)saveEhMessage:(id)arg1;
- (id)getOpId;
- (_Bool)saveOpId:(id)arg1;
- (id)getBuinessId:(id)arg1;
- (_Bool)saveBuinessId:(id)arg1;
- (id)preference;
- (id)init;

@end

