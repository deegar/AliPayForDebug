//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2OGuessYouLikeTabItem : NSObject
{
    _Bool _hasMore;
    NSString *_name;
    NSString *_text;
    NSString *_labelId;
    NSString *_recParams;
    unsigned long long _hasShowNumber;
    unsigned long long _index;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long hasShowNumber; // @synthesize hasShowNumber=_hasShowNumber;
@property(retain, nonatomic) NSString *recParams; // @synthesize recParams=_recParams;
@property(retain, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
