//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APExceptionView.h"

@class NSString;

@interface APMainPageExceptionView : APExceptionView
{
    NSString *_desc;
    id _target;
    SEL _buttonAction;
}

+ (id)exceptionViewWith:(id)arg1 descript:(id)arg2 selector:(SEL)arg3;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
