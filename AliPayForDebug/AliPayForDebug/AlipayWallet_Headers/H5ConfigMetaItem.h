//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface H5ConfigMetaItem : NSObject
{
    _Bool _needCache;
    _Bool _didInitCache;
    _Bool _needJsonParse;
    NSObject *_defaultValue;
}

@property(retain, nonatomic) NSObject *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool needJsonParse; // @synthesize needJsonParse=_needJsonParse;
@property(nonatomic) _Bool didInitCache; // @synthesize didInitCache=_didInitCache;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

