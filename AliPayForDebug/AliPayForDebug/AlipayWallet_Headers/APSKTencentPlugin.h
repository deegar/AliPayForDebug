//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSKShareBasePlugin.h"

@interface APSKTencentPlugin : APSKShareBasePlugin
{
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)shareTokenChannelId;
- (_Bool)tryShareZhiTokenWithTitle:(id)arg1 text:(id)arg2 iconURL:(id)arg3 url:(id)arg4 extraInfo:(id)arg5;
- (_Bool)tryShareSearchCodeWithTitle:(id)arg1 text:(id)arg2 iconURL:(id)arg3 url:(id)arg4 extraInfo:(id)arg5;
- (id)defaultTipsURLStrForChannel:(id)arg1;
- (void)handleForbiddenShare;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

