//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface AFWStockBulletinClassHeaderView : UIView
{
    NSString *_currentType;
    NSArray *_flags;
    unsigned long long _currentIndex;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
- (void).cxx_destruct;
- (void)classSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 flags:(id)arg2 defaultType:(id)arg3 clickBlock:(CDUnknownBlockType)arg4;

@end

