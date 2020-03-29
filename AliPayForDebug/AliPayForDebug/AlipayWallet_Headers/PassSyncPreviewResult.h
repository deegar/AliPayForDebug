//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PassSyncPreviewResult : NSObject
{
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSString *_title;
    NSArray *_desc;
    NSString *_callback;
    NSString *_logo;
    NSString *_merchantName;
    NSString *_validStartDate;
    NSString *_validEndDate;
}

+ (Class)descElementClass;
@property(retain, nonatomic) NSString *validEndDate; // @synthesize validEndDate=_validEndDate;
@property(retain, nonatomic) NSString *validStartDate; // @synthesize validStartDate=_validStartDate;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSArray *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

