//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface GWDetailFooterView : UIView
{
    CDUnknownBlockType _continueSendHandler;
    CDUnknownBlockType _goldRecordHandler;
    CDUnknownBlockType _alsoSendHandler;
}

@property(copy, nonatomic) CDUnknownBlockType alsoSendHandler; // @synthesize alsoSendHandler=_alsoSendHandler;
@property(copy, nonatomic) CDUnknownBlockType goldRecordHandler; // @synthesize goldRecordHandler=_goldRecordHandler;
@property(copy, nonatomic) CDUnknownBlockType continueSendHandler; // @synthesize continueSendHandler=_continueSendHandler;
- (void).cxx_destruct;
- (void)didTappedAlsoSendButton;
- (void)didTappedGoldRecordButton;
- (void)didTappedContinueSendButton;
- (id)roleWithResponse:(id)arg1 option:(id)arg2 spmParam:(id)arg3;
- (void)reloadWithDetailResult:(id)arg1 option:(id)arg2 spmParam:(id)arg3;

@end
