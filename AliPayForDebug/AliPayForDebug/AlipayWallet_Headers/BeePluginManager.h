//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface BeePluginManager : NSObject
{
    UIView *_mainView;
    NSArray *_installedItems;
}

@property(retain, nonatomic) NSArray *installedItems; // @synthesize installedItems=_installedItems;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)invokeWithTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
- (void)invokeSelector:(SEL)arg1 withArguments:(id)arg2;
- (_Bool)isInstalledItem:(id)arg1;
- (void)replaceItemOfClass:(Class)arg1 withNewItem:(id)arg2;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addDelegate:(id)arg1;

@end
