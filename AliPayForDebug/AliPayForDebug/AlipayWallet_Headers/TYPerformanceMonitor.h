//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TYPerformanceMonitor : NSObject
{
    _Bool _uploadLag;
    _Bool _uploadFPS;
}

+ (_Bool)customSwitch;
+ (id)sharedInstance;
@property(nonatomic) _Bool uploadFPS; // @synthesize uploadFPS=_uploadFPS;
@property(nonatomic) _Bool uploadLag; // @synthesize uploadLag=_uploadLag;
- (_Bool)shouldUploadFPSScore;
- (_Bool)shouldUploadLag;
- (void)initStrategy;
- (void)beginMonitor;
- (_Bool)shouldStart;
- (void)startMonitor;
- (id)init;

@end

