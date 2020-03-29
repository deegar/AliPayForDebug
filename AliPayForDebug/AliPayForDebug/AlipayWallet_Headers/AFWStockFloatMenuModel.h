//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AFWStockFloatMenuModel : NSObject
{
    NSString *_actionName;
    UIImage *_icon;
    UIImage *_highlightedIcon;
    NSString *_actionURL;
    NSString *_actionImageURL;
    CDUnknownBlockType _stockFloatActionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType stockFloatActionHandler; // @synthesize stockFloatActionHandler=_stockFloatActionHandler;
@property(retain, nonatomic) NSString *actionImageURL; // @synthesize actionImageURL=_actionImageURL;
@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) UIImage *highlightedIcon; // @synthesize highlightedIcon=_highlightedIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (void).cxx_destruct;

@end

