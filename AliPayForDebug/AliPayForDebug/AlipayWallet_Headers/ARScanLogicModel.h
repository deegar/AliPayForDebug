//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARLocalRecModel;

@interface ARScanLogicModel : NSObject
{
    unsigned long long _state;
    ARLocalRecModel *_localRecModel;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) ARLocalRecModel *localRecModel; // @synthesize localRecModel=_localRecModel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)modeWithLaunchParams:(id)arg1;
@property(readonly, nonatomic) _Bool didReadyStartRecognize;

@end

