//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUImageViewModel, NSString;

@interface AUNoticeBarViewModel : NSObject
{
    AUImageViewModel *_mainImageModel;
    NSString *_mainTitle;
    NSString *_desc;
    NSString *_subTitle;
    AUImageViewModel *_descImageModel;
}

@property(retain, nonatomic) AUImageViewModel *descImageModel; // @synthesize descImageModel=_descImageModel;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) AUImageViewModel *mainImageModel; // @synthesize mainImageModel=_mainImageModel;
- (void).cxx_destruct;

@end

