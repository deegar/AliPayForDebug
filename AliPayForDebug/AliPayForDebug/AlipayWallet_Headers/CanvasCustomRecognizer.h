//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray;
@protocol CanvasContainerProtocol;

@interface CanvasCustomRecognizer : UIGestureRecognizer
{
    id <CanvasContainerProtocol> _msgDelegate;
    NSMutableArray *_preTouches;
}

@property(retain, nonatomic) NSMutableArray *preTouches; // @synthesize preTouches=_preTouches;
@property(nonatomic) __weak id <CanvasContainerProtocol> msgDelegate; // @synthesize msgDelegate=_msgDelegate;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 data:(id)arg2;
- (id)genChangedTouches:(id)arg1;
- (id)transformToTouchesArray:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

