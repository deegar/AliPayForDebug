//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface giftprodGiftHbTemplatePageResult : NSObject
{
    _Bool _success;
    _Bool _hasNest;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSString *_msgType;
    NSString *_followAction;
    NSString *_fullPage;
    NSArray *_params;
    NSString *_tagId;
    NSString *_offset;
    NSArray *_hbTemplates;
}

+ (Class)hbTemplatesElementClass;
+ (Class)paramsElementClass;
@property(retain, nonatomic) NSArray *hbTemplates; // @synthesize hbTemplates=_hbTemplates;
@property(nonatomic) _Bool hasNest; // @synthesize hasNest=_hasNest;
@property(retain, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *fullPage; // @synthesize fullPage=_fullPage;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

