//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

@class O2OHeadlineFollowModel;

@interface O2OIndexHeadlineFollowController : O2OTemplateController
{
    O2OHeadlineFollowModel *_followModel;
}

+ (id)keyForAuthor:(id)arg1;
+ (_Bool)hasNewContent:(id)arg1 timeStamp:(long long)arg2;
@property(retain, nonatomic) O2OHeadlineFollowModel *followModel; // @synthesize followModel=_followModel;
- (void).cxx_destruct;
- (void)readContent:(id)arg1;
- (void)didTapFollow:(id)arg1 sender:(id)arg2;

@end

