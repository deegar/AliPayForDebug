//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIColor;

@interface ALPOperationModel : NSObject
{
    NSString *_bizType;
    NSString *_logoText;
    NSString *_secondLogoText;
    NSString *_passId;
    NSString *_colorString;
    NSString *_operations;
    NSString *_secondaryOperationUrl;
    NSString *_secondaryOperationTitle;
    NSString *_secondaryOperationAltText;
    NSString *_trendUrl;
    NSString *_templateId;
    NSArray *_opMsgArray;
    NSDictionary *_spmParams;
}

+ (void)stopOTPService;
+ (id)modelWithMarketPassInfo:(id)arg1;
+ (id)modelWithCardInfo:(id)arg1;
+ (id)modelWithPassInfo:(id)arg1;
@property(retain, nonatomic) NSDictionary *spmParams; // @synthesize spmParams=_spmParams;
@property(retain, nonatomic) NSArray *opMsgArray; // @synthesize opMsgArray=_opMsgArray;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *trendUrl; // @synthesize trendUrl=_trendUrl;
@property(copy, nonatomic) NSString *secondaryOperationAltText; // @synthesize secondaryOperationAltText=_secondaryOperationAltText;
@property(copy, nonatomic) NSString *secondaryOperationTitle; // @synthesize secondaryOperationTitle=_secondaryOperationTitle;
@property(copy, nonatomic) NSString *secondaryOperationUrl; // @synthesize secondaryOperationUrl=_secondaryOperationUrl;
@property(copy, nonatomic) NSString *operations; // @synthesize operations=_operations;
@property(copy, nonatomic) NSString *colorString; // @synthesize colorString=_colorString;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(copy, nonatomic) NSString *secondLogoText; // @synthesize secondLogoText=_secondLogoText;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color;

@end

