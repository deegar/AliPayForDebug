//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCDCOperation.h"

@class NSString;

@interface CCDCPostOperation : CCDCOperation
{
    NSString *_paramString;
}

@property(retain, nonatomic) NSString *paramString; // @synthesize paramString=_paramString;
- (void).cxx_destruct;
- (id)buildRequest:(id)arg1;
- (id)initWithCardNumber:(id)arg1 doUpdate:(_Bool)arg2;
- (id)initWithCardNumber:(id)arg1;

@end

