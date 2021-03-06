//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APAudioEncoder-Protocol.h"

@class NSMutableData, NSString, WAudioCodeConvert;

@interface APAudioSilkEncoder : NSObject <APAudioEncoder>
{
    NSMutableData *_silkData;
    WAudioCodeConvert *_silkEncoder;
}

+ (_Bool)isAvailable;
@property(retain, nonatomic) WAudioCodeConvert *silkEncoder; // @synthesize silkEncoder=_silkEncoder;
@property(retain, nonatomic) NSMutableData *silkData; // @synthesize silkData=_silkData;
- (void).cxx_destruct;
- (id)getSilkEncoder;
- (id)encodedData;
- (id)complete;
- (void)reset;
- (id)fillPcmDataBuffer:(id)arg1 error:(id *)arg2;
- (void)start;
- (void)prepareWithSetting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

