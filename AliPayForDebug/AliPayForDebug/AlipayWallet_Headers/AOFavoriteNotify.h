//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AOFavoriteNotify : NSObject
{
    NSMutableArray *_dataLists;
    SEL _sel;
    NSString *_notifyName;
}

+ (id)finalResultWithAction:(id)arg1 params:(id)arg2 response:(id)arg3;
+ (void)postFavoriteNotification:(id)arg1 resultDic:(id)arg2 action:(id)arg3 curAppId:(id)arg4 viewController:(id)arg5;
@property(copy, nonatomic) NSString *notifyName; // @synthesize notifyName=_notifyName;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(retain, nonatomic) NSMutableArray *dataLists; // @synthesize dataLists=_dataLists;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserverWithAppId:(id)arg1;
- (void)addToHomeObserver:(id)arg1;
- (void)onNotifyHandler:(id)arg1;
- (void)addObserverWithAppId:(id)arg1 webVC:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)initWithNotifyName:(id)arg1 sel:(SEL)arg2;

@end

