//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VRRichLabel;

@protocol VRRichLabelDelegate <NSObject>

@optional
- (void)linkPress:(VRRichLabel *)arg1 data:(id)arg2 linkRect:(struct CGRect)arg3 status:(int)arg4;
- (void)linkTaped:(VRRichLabel *)arg1 data:(id)arg2 linkRect:(struct CGRect)arg3;
@end

