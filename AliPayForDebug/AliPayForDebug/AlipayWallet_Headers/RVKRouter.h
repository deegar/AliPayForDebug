//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RVKRouter : NSObject
{
    NSString *_url;
    NSString *_redirectUrl;
    long long _statusCode;
    RVKRouter *_previousRouter;
    RVKRouter *_nextRouter;
    RVKRouter *_lastRouter;
    NSDate *_startDate;
    NSDate *_finishDate;
}

@property(retain, nonatomic) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) __weak RVKRouter *lastRouter; // @synthesize lastRouter=_lastRouter;
@property(retain, nonatomic) RVKRouter *nextRouter; // @synthesize nextRouter=_nextRouter;
@property(nonatomic) __weak RVKRouter *previousRouter; // @synthesize previousRouter=_previousRouter;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)addRouter:(id)arg1;
- (id)initWithUrl:(id)arg1 statusCode:(long long)arg2 redirectUrl:(id)arg3;

@end

