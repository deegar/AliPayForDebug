//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APContactViewControllerDelegate-Protocol.h"

@class DTViewController, NSString;

@interface ContactAppLauncher : NSObject <APContactViewControllerDelegate>
{
    DTViewController *_recentVC;
}

@property(retain, nonatomic) DTViewController *recentVC; // @synthesize recentVC=_recentVC;
- (void).cxx_destruct;
- (id)generateContactBaseViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

