//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMGWBasicNotify.h"

@class NSString;

@interface SMGWConnectionLostNotify : SMGWBasicNotify
{
    int _code;
    NSString *_msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

