//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIView;

@protocol CKWidgetProtocol <NSObject>
+ (UIView *)createView:(NSDictionary *)arg1 reuse:(UIView *)arg2 size:(struct CGSize)arg3;
- (void)updateComponentData:(NSDictionary *)arg1;

@optional
+ (struct CGSize)sizeOfView:(id)arg1 css:(NSDictionary *)arg2 attribute:(NSDictionary *)arg3 superFrame:(struct CGRect)arg4;
- (void)cubeViewWillDestroy:(NSDictionary *)arg1;
- (void)cubeViewDidDisappear:(NSDictionary *)arg1;
- (void)cubeViewWillDisappear:(NSDictionary *)arg1;
- (void)cubeViewDidAppear:(NSDictionary *)arg1;
- (void)cubeViewWillAppear:(NSDictionary *)arg1;
- (_Bool)shouldHandleAccessibility:(NSDictionary *)arg1;
@end
