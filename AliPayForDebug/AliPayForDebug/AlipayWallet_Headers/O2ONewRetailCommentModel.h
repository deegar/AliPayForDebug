//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2ONewRetailPartialBaseModel.h"

@class NSDictionary, UIViewController;

@interface O2ONewRetailCommentModel : O2ONewRetailPartialBaseModel
{
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (id)templatesFromResponse:(id)arg1;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)specifiedScene;

// Remaining properties
@property(retain, nonatomic) NSDictionary *commonDic;

@end

