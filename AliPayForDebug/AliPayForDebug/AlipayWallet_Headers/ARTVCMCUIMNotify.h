//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicNotify.h"

@class ARTVCIMMessage, NSString;

@interface ARTVCMCUIMNotify : ARTVCMCUBasicNotify
{
    NSString *_uid;
    ARTVCIMMessage *_msg;
}

@property(retain, nonatomic) ARTVCIMMessage *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end
