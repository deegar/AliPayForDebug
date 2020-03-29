//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MASSTFSDownMethod, NSString;

@interface CCDNResourceNode : NSObject
{
    MASSTFSDownMethod *_method;
    double _timeoutInterval;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _headRcved;
    CDUnknownBlockType _progress;
    NSString *_resUrl;
    NSString *_subPath;
    NSString *_appId;
    double _startTime;
}

+ (id)createResNode;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *subPath; // @synthesize subPath=_subPath;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType headRcved; // @synthesize headRcved=_headRcved;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) MASSTFSDownMethod *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (id)description;

@end

