//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOElement.h"

@class NSString;

@interface APDAOKeyValueFormatter : APDAOElement
{
    NSString *_prefix;
    NSString *_pairs;
    NSString *_join;
}

@property(retain, nonatomic) NSString *join; // @synthesize join=_join;
@property(retain, nonatomic) NSString *pairs; // @synthesize pairs=_pairs;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)initWithXML:(id)arg1;

@end

