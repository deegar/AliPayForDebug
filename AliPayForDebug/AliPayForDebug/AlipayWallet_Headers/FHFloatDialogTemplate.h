//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHBaseTemplate.h"

@class NSArray, NSDictionary, NSString, UITableViewCell;

@interface FHFloatDialogTemplate : FHBaseTemplate
{
    UITableViewCell *_placeholderCell;
    _Bool _shouldShowCard;
    _Bool _isCachedData;
    NSString *_desc;
    NSString *_eventId;
    NSString *_slideToCard;
    NSArray *_keywordArray;
    NSDictionary *_logExtParam;
}

@property(nonatomic) _Bool isCachedData; // @synthesize isCachedData=_isCachedData;
@property(nonatomic) _Bool shouldShowCard; // @synthesize shouldShowCard=_shouldShowCard;
@property(retain, nonatomic) NSDictionary *logExtParam; // @synthesize logExtParam=_logExtParam;
@property(retain, nonatomic) NSArray *keywordArray; // @synthesize keywordArray=_keywordArray;
@property(retain, nonatomic) NSString *slideToCard; // @synthesize slideToCard=_slideToCard;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeAccount;
- (id)initWithDelegate:(id)arg1 card:(id)arg2 obFloor:(id)arg3 context:(id)arg4;

@end
