//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UploadedAddress : NSObject
{
    _Bool _hasRemove;
    NSString *_phoneNumber;
    NSString *_phoneBookName;
    NSString *_orderNumber;
    NSString *_pyString;
    NSString *_pyIndex;
    NSString *_indexKey;
}

@property(nonatomic) _Bool hasRemove; // @synthesize hasRemove=_hasRemove;
@property(retain, nonatomic) NSString *indexKey; // @synthesize indexKey=_indexKey;
@property(retain, nonatomic) NSString *pyIndex; // @synthesize pyIndex=_pyIndex;
@property(retain, nonatomic) NSString *pyString; // @synthesize pyString=_pyString;
@property(retain, nonatomic) NSString *orderNumber; // @synthesize orderNumber=_orderNumber;
@property(retain, nonatomic) NSString *phoneBookName; // @synthesize phoneBookName=_phoneBookName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)genIndexKey;

@end

