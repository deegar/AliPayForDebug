//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FSMState, NSMutableSet, NSSet;

@interface FSMStateMachine : NSObject <NSCoding, NSCopying>
{
    _Bool _active;
    FSMState *_currentState;
    FSMState *_initialState;
    NSMutableSet *_mutableStates;
    NSMutableSet *_mutableEvents;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableSet *mutableEvents; // @synthesize mutableEvents=_mutableEvents;
@property(retain, nonatomic) NSMutableSet *mutableStates; // @synthesize mutableStates=_mutableStates;
@property(retain, nonatomic) FSMState *initialState; // @synthesize initialState=_initialState;
@property(retain, nonatomic) FSMState *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didFireEvent:(id)arg1 transition:(id)arg2 oldState:(id)arg3 newState:(id)arg4;
- (void)willFireEvent:(id)arg1 transition:(id)arg2 oldState:(id)arg3 newState:(id)arg4;
- (_Bool)fireEvent:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (void)activate;
- (id)eventWithName:(id)arg1;
- (void)addFSMEvents:(id)arg1;
- (void)addEvent:(id)arg1;
@property(readonly, nonatomic) NSSet *events;
- (id)stateWithName:(id)arg1;
- (void)addStates:(id)arg1;
- (void)addState:(id)arg1;
@property(readonly, nonatomic) NSSet *states;
- (id)init;

@end

