//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol O2OFaceRatingViewDelegate;

@interface O2OFaceRatingView : UIView
{
    NSArray *_buttons;
    unsigned long long _score;
    id <O2OFaceRatingViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)tapFace:(id)arg1;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

