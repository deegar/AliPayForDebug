//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SECUPROD_MARKETMidPageCardRequest : NSObject
{
    NSString *_midPageId;
    NSString *_cardId;
    NSDictionary *_params;
}

+ (Class)paramsElementClass;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *midPageId; // @synthesize midPageId=_midPageId;
- (void).cxx_destruct;

@end

