//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCPopMenuItemInterface-Protocol.h"

@class NSString;

@interface HCPopMenuHomeRejectItem : NSObject <HCPopMenuItemInterface>
{
}

- (void)rejectWithManager:(id)arg1 item:(id)arg2;
- (void)handleClickEvent:(id)arg1 withItem:(id)arg2 andTapButtonIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

