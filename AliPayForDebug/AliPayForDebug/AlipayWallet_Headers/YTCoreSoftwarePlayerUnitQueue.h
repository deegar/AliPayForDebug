//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface YTCoreSoftwarePlayerUnitQueue : NSObject
{
    NSMutableArray *_unitArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *unitArray; // @synthesize unitArray=_unitArray;
- (void).cxx_destruct;
- (void)popUnit:(id)arg1;
- (void)pushUnit:(id)arg1;
- (id)getUnitWithUnitContext:(id)arg1;
- (id)init;

@end

