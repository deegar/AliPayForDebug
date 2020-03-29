//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NXKConfiguration : NSObject
{
    _Bool _shouldInterceptorExtensionDispatch;
    _Bool _shouldUseBridgeExtension;
    NSString *_defaultConfigFilePath;
    NSString *_extraConfigFilePath;
}

+ (id)allocPrivate;
+ (id)defaultConfiguration;
@property(nonatomic) _Bool shouldUseBridgeExtension; // @synthesize shouldUseBridgeExtension=_shouldUseBridgeExtension;
@property(nonatomic) _Bool shouldInterceptorExtensionDispatch; // @synthesize shouldInterceptorExtensionDispatch=_shouldInterceptorExtensionDispatch;
@property(copy, nonatomic) NSString *extraConfigFilePath; // @synthesize extraConfigFilePath=_extraConfigFilePath;
@property(copy, nonatomic) NSString *defaultConfigFilePath; // @synthesize defaultConfigFilePath=_defaultConfigFilePath;
- (void).cxx_destruct;
- (id)initPrivate;

@end

