//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GO2OSearchTip : NSObject
{
    NSString *_query;
    NSString *_showText;
    NSString *_jumpUrl;
    NSString *_scm;
}

@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 showText:(id)arg2 jumpUrl:(id)arg3 scm:(id)arg4;

@end

