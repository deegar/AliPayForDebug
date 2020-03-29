//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TaskBoxBaseService.h"

#import "DTService-Protocol.h"

@class NSString;

@interface HomeCardService : TaskBoxBaseService <DTService>
{
    CDUnknownBlockType _addAppGuide;
    CDUnknownBlockType _addOrUpdateHomeCard;
    CDUnknownBlockType _showDialog;
    CDUnknownBlockType _refHome;
}

@property(copy, nonatomic) CDUnknownBlockType refHome; // @synthesize refHome=_refHome;
@property(copy, nonatomic) CDUnknownBlockType showDialog; // @synthesize showDialog=_showDialog;
@property(copy, nonatomic) CDUnknownBlockType addOrUpdateHomeCard; // @synthesize addOrUpdateHomeCard=_addOrUpdateHomeCard;
@property(copy, nonatomic) CDUnknownBlockType addAppGuide; // @synthesize addAppGuide=_addAppGuide;
- (void).cxx_destruct;
- (void)whenLoadTaskBoxAction;
- (void)start;
- (void)willDestroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

