//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface APShareServiceCard : NSObject
{
    int _templeteCode;
    NSMutableDictionary *_cardInfo;
}

@property(nonatomic) int templeteCode; // @synthesize templeteCode=_templeteCode;
@property(retain, nonatomic) NSMutableDictionary *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;
- (id)cardViewClassName;

@end

