//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNavItemView.h"

@protocol GO2ONavItemListener;

@interface GO2ONavItemView : AUNavItemView
{
    unsigned long long _viewFlag;
    id <GO2ONavItemListener> _listener;
}

@property(nonatomic) __weak id <GO2ONavItemListener> listener; // @synthesize listener=_listener;
@property(nonatomic) unsigned long long viewFlag; // @synthesize viewFlag=_viewFlag;
- (void).cxx_destruct;
- (void)onClicked;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 listener:(id)arg3 viewFlag:(unsigned long long)arg4;

@end

