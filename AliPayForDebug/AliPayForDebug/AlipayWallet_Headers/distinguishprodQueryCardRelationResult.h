//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, distinguishprodCardModel;

@interface distinguishprodQueryCardRelationResult : NSObject
{
    _Bool _success;
    _Bool _isSaved;
    int _showType;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSDictionary *_extraInfo;
    distinguishprodCardModel *_targetCard;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
+ (Class)extraInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) distinguishprodCardModel *targetCard; // @synthesize targetCard=_targetCard;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

