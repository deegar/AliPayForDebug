//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REOPPhase.h"

@class REImageView;

@interface REOPPrePhase : REOPPhase
{
    REImageView *_tempTopImageView;
    REImageView *_tempBottomImageView;
}

@property(retain, nonatomic) REImageView *tempBottomImageView; // @synthesize tempBottomImageView=_tempBottomImageView;
@property(retain, nonatomic) REImageView *tempTopImageView; // @synthesize tempTopImageView=_tempTopImageView;
- (void).cxx_destruct;
- (void)requestPreRpc;
- (void)downloadTemplateImages:(CDUnknownBlockType)arg1;
- (id)nextPhase;
- (_Bool)enterNextPhase:(id)arg1;
- (void)run;

@end

