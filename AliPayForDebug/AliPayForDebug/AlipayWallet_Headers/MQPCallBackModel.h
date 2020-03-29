//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, WKTemplateModel;

@interface MQPCallBackModel : NSObject
{
    id _doc;
    NSError *_error;
    CDUnknownBlockType _onComplete;
    WKTemplateModel *_localTemplate;
    WKTemplateModel *_template;
    NSString *_templateID;
    NSNumber *_renderedLocal;
    double _downloadTime;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double downloadTime; // @synthesize downloadTime=_downloadTime;
@property(retain, nonatomic) NSNumber *renderedLocal; // @synthesize renderedLocal=_renderedLocal;
@property(retain, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(retain, nonatomic) WKTemplateModel *template; // @synthesize template=_template;
@property(retain, nonatomic) WKTemplateModel *localTemplate; // @synthesize localTemplate=_localTemplate;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (void)callback;

@end

