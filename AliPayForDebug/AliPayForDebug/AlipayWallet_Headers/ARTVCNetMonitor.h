//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ARTVCNetmonitorDelegate;

@interface ARTVCNetMonitor : NSObject
{
    _Bool _firtNotityHandled;
    _Bool _stopped;
    id <ARTVCNetmonitorDelegate> _delegate;
}

@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) _Bool firtNotityHandled; // @synthesize firtNotityHandled=_firtNotityHandled;
@property(nonatomic) __weak id <ARTVCNetmonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkChanged:(id)arg1;
- (void)stop;
- (void)start;
- (id)init;

@end

