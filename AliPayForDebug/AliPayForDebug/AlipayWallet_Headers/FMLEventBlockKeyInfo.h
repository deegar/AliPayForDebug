//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMLEventBlockKeyInfo : NSObject
{
    unsigned long long _event;
    NSString *_observerKey;
    NSString *_objectId;
    NSString *_modelName;
    NSString *_eventBlockKey;
    NSString *_modelKey;
}

+ (id)eventKeyForEvent:(unsigned long long)arg1;
+ (id)eventCallbackBlockKeyWithEvent:(unsigned long long)arg1 observerKey:(id)arg2 modelKey:(id)arg3;
@property(readonly, nonatomic) NSString *modelKey; // @synthesize modelKey=_modelKey;
@property(readonly, nonatomic) NSString *eventBlockKey; // @synthesize eventBlockKey=_eventBlockKey;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *observerKey; // @synthesize observerKey=_observerKey;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithModelName:(id)arg1 objectId:(id)arg2 observerKey:(id)arg3 event:(unsigned long long)arg4;

@end

