//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface VZFAsyncDrawingTransactionOperation : NSObject
{
    CDUnknownBlockType _operationCompletionBlock;
    id <NSObject> _value;
}

@property(retain) id <NSObject> value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
- (void).cxx_destruct;
- (void)callAndReleaseCompletionBlock:(_Bool)arg1;
- (void)dealloc;
- (id)initWithOperationCompletionBlock:(CDUnknownBlockType)arg1;

@end

