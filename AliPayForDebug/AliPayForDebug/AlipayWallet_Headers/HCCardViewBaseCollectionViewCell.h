//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CSCard, HCCardContainer, UILongPressGestureRecognizer;
@protocol CSEventListener;

@interface HCCardViewBaseCollectionViewCell : UICollectionViewCell
{
    _Bool _useDefaultContainer;
    CSCard *_card;
    id <CSEventListener> _eventDelegate;
    long long _relativePosition;
    HCCardContainer *_container;
    UILongPressGestureRecognizer *_longPress;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) HCCardContainer *container; // @synthesize container=_container;
@property(nonatomic) _Bool useDefaultContainer; // @synthesize useDefaultContainer=_useDefaultContainer;
@property(nonatomic) long long relativePosition; // @synthesize relativePosition=_relativePosition;
@property(nonatomic) __weak id <CSEventListener> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) CSCard *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (_Bool)isScroll;
- (void)dealloc;
- (id)getBackgroundView;
- (void)longPress:(id)arg1;
- (void)addLongPressGesture;
- (id)initWithFrame:(struct CGRect)arg1;

@end

