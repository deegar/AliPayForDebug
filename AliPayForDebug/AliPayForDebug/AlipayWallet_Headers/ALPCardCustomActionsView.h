//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPCardBlockView.h"

@class NSArray, NSString;

@interface ALPCardCustomActionsView : ALPCardBlockView
{
    NSArray *_actionItemList;
    NSString *_templatId;
    NSString *_passId;
}

@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(copy, nonatomic) NSString *templatId; // @synthesize templatId=_templatId;
@property(copy, nonatomic) NSArray *actionItemList; // @synthesize actionItemList=_actionItemList;
- (void).cxx_destruct;
- (void)actionBtnClicked:(id)arg1;
- (void)updateWithCardDetailModel:(id)arg1;

@end

