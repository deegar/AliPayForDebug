//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSNativeEventListener-Protocol.h"

@protocol CSCard, CSEventListener;

@interface HCCardSocratesDelegate : NSObject <CSNativeEventListener>
{
    id <CSCard> _card;
    id _sender;
    id <CSEventListener> _eventDelegate;
}

@property(nonatomic) __weak id <CSEventListener> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(retain, nonatomic) id <CSCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)interceptNativeCardComponentsEvent:(id)arg1 onView:(id)arg2;

@end
