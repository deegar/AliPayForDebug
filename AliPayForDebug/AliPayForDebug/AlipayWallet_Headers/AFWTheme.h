//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFWTheme : NSObject
{
    NSDictionary *_themeData;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *themeData; // @synthesize themeData=_themeData;
- (void).cxx_destruct;
- (id)eidStyles;
- (id)classStyles;
- (id)valueForKey:(id)arg1 eid:(id)arg2 classes:(id)arg3;
- (id)valueForKey:(id)arg1 selector:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

