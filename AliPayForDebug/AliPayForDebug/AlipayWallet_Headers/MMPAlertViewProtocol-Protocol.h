//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol UIAlertViewDelegate;

@protocol MMPAlertViewProtocol <NSObject>
@property(retain, nonatomic) NSDictionary *extInfo;
@property(nonatomic) long long cancelButtonIndex;
@property(nonatomic) __weak id <UIAlertViewDelegate> delegate;
- (void)dismiss;
- (void)show;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithTitle:(NSString *)arg1 message:(id)arg2 delegate:(id <UIAlertViewDelegate>)arg3 cancelButtonTitle:(NSString *)arg4 otherButtonTitles:(NSArray *)arg5;
@end

