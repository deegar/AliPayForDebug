//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTCoreSoftwarePlayerUnitOperation : NSObject
{
    _Bool _asynchronous;
    _Bool _didExecuted;
    _Bool _didCanceled;
    unsigned long long _mode;
    NSString *_name;
    CDUnknownBlockType _executionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
@property(copy) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool didCanceled; // @synthesize didCanceled=_didCanceled;
@property(nonatomic) _Bool didExecuted; // @synthesize didExecuted=_didExecuted;
@property(nonatomic) _Bool asynchronous; // @synthesize asynchronous=_asynchronous;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (_Bool)cancel;
- (_Bool)execute;
- (id)initWithExecutionBlock:(CDUnknownBlockType)arg1;

@end

