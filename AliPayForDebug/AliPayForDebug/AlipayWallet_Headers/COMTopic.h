//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMTopic : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly) _Bool hasTitle; // @dynamic hasTitle;
@property(readonly) _Bool hasTopicId; // @dynamic hasTopicId;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;

@end
