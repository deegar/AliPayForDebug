//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DTPushCommandHandler : NSObject
{
    NSDictionary *_params;
    NSString *_type;
    _Bool _urlencode;
}

- (void).cxx_destruct;
- (id)generateURLScheme;
- (id)appScheme;
- (id)initWithType:(id)arg1 params:(id)arg2 urlencode:(id)arg3;

@end

