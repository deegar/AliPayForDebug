//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSString;

@interface APContactResponseVO : NSObject
{
    _Bool _isFromCache;
    _Bool _deleteSuccess;
    _Bool _hasMobileContact;
    int _loadType;
    NSMutableDictionary *_contacts;
    NSArray *_indexCharArray;
    NSError *_error;
    long long _phoneCount;
    NSString *_errorMemo;
    NSArray *_contactsArray;
}

@property(retain, nonatomic) NSArray *contactsArray; // @synthesize contactsArray=_contactsArray;
@property(nonatomic) _Bool hasMobileContact; // @synthesize hasMobileContact=_hasMobileContact;
@property(nonatomic) _Bool deleteSuccess; // @synthesize deleteSuccess=_deleteSuccess;
@property(retain, nonatomic) NSString *errorMemo; // @synthesize errorMemo=_errorMemo;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(nonatomic) long long phoneCount; // @synthesize phoneCount=_phoneCount;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int loadType; // @synthesize loadType=_loadType;
@property(retain, nonatomic) NSArray *indexCharArray; // @synthesize indexCharArray=_indexCharArray;
@property(retain, nonatomic) NSMutableDictionary *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;

@end

