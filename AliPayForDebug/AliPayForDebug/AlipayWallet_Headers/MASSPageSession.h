//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface MASSPageSession : NSObject
{
    NSCache *_sessions;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *sessions; // @synthesize sessions=_sessions;
- (void).cxx_destruct;
- (_Bool)shortcutSessionKey:(id)arg1 url:(id)arg2;
- (void)noticeDownloadUrl:(id)arg1 session:(id)arg2 cost:(double)arg3 safeCdn:(_Bool)arg4;
- (void)finishSession:(id)arg1;
- (id)createSessionKey:(id)arg1;
- (id)init;

@end

