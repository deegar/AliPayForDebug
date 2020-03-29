//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBAppConfigManager, NBAppDataSourceManager, NSDictionary, NSString, PSDSession, UIViewController;

@interface NBSessionContext : NSObject
{
    NSString *_nbl_id;
    unsigned long long _sessionType;
    Class _viewControllerClass;
    Class _contentViewClass;
    NSDictionary *_params;
    UIViewController *_rootViewController;
    PSDSession *_psdSession;
    NBAppDataSourceManager *_appDataSourceManager;
    NBAppConfigManager *_appConfigManager;
    NSDictionary *_expando;
}

@property(retain, nonatomic) NSDictionary *expando; // @synthesize expando=_expando;
@property(retain, nonatomic) NBAppConfigManager *appConfigManager; // @synthesize appConfigManager=_appConfigManager;
@property(retain, nonatomic) NBAppDataSourceManager *appDataSourceManager; // @synthesize appDataSourceManager=_appDataSourceManager;
@property(nonatomic) __weak PSDSession *psdSession; // @synthesize psdSession=_psdSession;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) Class contentViewClass; // @synthesize contentViewClass=_contentViewClass;
@property(retain, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *nbl_id; // @synthesize nbl_id=_nbl_id;
- (void).cxx_destruct;
- (id)init;

@end

