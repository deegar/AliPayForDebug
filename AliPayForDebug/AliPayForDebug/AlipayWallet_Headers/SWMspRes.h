//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface SWMspRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasApiNsp;
    _Bool _hasApiNm;
    _Bool _hasApiVer;
    _Bool _hasParams;
    _Bool _hasCode;
    _Bool _hasErrMsg;
    _Bool _hasMspParam;
    NSString *_apiNsp;
    NSString *_apiNm;
    NSString *_apiVer;
    NSString *_params;
    NSString *_code;
    NSString *_errMsg;
    NSString *_mspParam;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *mspParam; // @synthesize mspParam=_mspParam;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *apiVer; // @synthesize apiVer=_apiVer;
@property(retain, nonatomic) NSString *apiNm; // @synthesize apiNm=_apiNm;
@property(retain, nonatomic) NSString *apiNsp; // @synthesize apiNsp=_apiNsp;
@property(readonly) _Bool hasMspParam; // @synthesize hasMspParam=_hasMspParam;
@property(readonly) _Bool hasErrMsg; // @synthesize hasErrMsg=_hasErrMsg;
@property(readonly) _Bool hasCode; // @synthesize hasCode=_hasCode;
@property(readonly) _Bool hasParams; // @synthesize hasParams=_hasParams;
@property(readonly) _Bool hasApiVer; // @synthesize hasApiVer=_hasApiVer;
@property(readonly) _Bool hasApiNm; // @synthesize hasApiNm=_hasApiNm;
@property(readonly) _Bool hasApiNsp; // @synthesize hasApiNsp=_hasApiNsp;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

