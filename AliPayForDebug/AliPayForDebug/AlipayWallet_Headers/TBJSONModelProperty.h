//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TBJSONModelProperty : NSObject
{
    NSString *_name;
    long long _valueType;
    NSString *_typeName;
    Class _objectClass;
    NSArray *_objectProtocols;
    Class _containerElementClass;
    _Bool _isReadonly;
}

+ (id)propertyWithName:(id)arg1 typeString:(id)arg2;
+ (id)encodedTypesMap;
- (void).cxx_destruct;

@end

