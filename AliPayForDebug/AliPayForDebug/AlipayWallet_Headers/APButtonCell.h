//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray;

@interface APButtonCell : UITableViewCell
{
    NSMutableArray *_buttons;
}

+ (double)cellBtnHeight;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)addButtonWithType:(long long)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)addButton:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

