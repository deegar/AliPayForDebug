//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFWStockTimeLineContentConfig : NSObject
{
    NSString *_expoId;
    NSString *_SPMId;
    NSDictionary *_SPMParam;
    NSString *_tupleOneContent;
    NSString *_tupleOneContentColor;
    NSString *_tupleTwoContent;
    NSString *_tupleTwoContentColor;
    NSString *_backgroundColor;
    NSString *_actionURL;
}

@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *tupleTwoContentColor; // @synthesize tupleTwoContentColor=_tupleTwoContentColor;
@property(retain, nonatomic) NSString *tupleTwoContent; // @synthesize tupleTwoContent=_tupleTwoContent;
@property(retain, nonatomic) NSString *tupleOneContentColor; // @synthesize tupleOneContentColor=_tupleOneContentColor;
@property(retain, nonatomic) NSString *tupleOneContent; // @synthesize tupleOneContent=_tupleOneContent;
@property(retain, nonatomic) NSDictionary *SPMParam; // @synthesize SPMParam=_SPMParam;
@property(retain, nonatomic) NSString *SPMId; // @synthesize SPMId=_SPMId;
@property(retain, nonatomic) NSString *expoId; // @synthesize expoId=_expoId;
- (void).cxx_destruct;

@end

