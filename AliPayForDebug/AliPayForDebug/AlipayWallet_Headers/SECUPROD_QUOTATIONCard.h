//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RPCCommonResult.h"

@class NSString, SECUPROD_QUOTATIONMidPageNote;

@interface SECUPROD_QUOTATIONCard : RPCCommonResult
{
    _Bool _disable;
    NSString *_cardId;
    long long _lastModified;
    NSString *_scm;
    SECUPROD_QUOTATIONMidPageNote *_midPageNote;
    NSString *_channelId;
}

@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) SECUPROD_QUOTATIONMidPageNote *midPageNote; // @synthesize midPageNote=_midPageNote;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end

