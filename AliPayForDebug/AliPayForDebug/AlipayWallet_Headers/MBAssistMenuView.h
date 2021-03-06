//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MBAssistMenuView : UIView
{
    NSArray *_menuItems;
    CDUnknownBlockType _exposureMonitorBlock;
    CDUnknownBlockType _clickMonitorBlock;
}

+ (id)filterUnSupportMenus:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType clickMonitorBlock; // @synthesize clickMonitorBlock=_clickMonitorBlock;
@property(copy, nonatomic) CDUnknownBlockType exposureMonitorBlock; // @synthesize exposureMonitorBlock=_exposureMonitorBlock;
- (void).cxx_destruct;
- (void)menuActionError;
- (void)handUrlAction:(id)arg1;
- (void)btnPressed:(id)arg1;
- (void)refreshWithMenuItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

