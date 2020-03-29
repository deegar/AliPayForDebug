//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@interface H5NavigationBarEvent : PSDEvent
{
    _Bool _shouldSetDefaultColor;
    _Bool _shouldChangeTitleColor;
    _Bool _resetColor;
    _Bool _isLightTheme;
}

+ (id)changeNavigationBarColorEventByReset;
+ (id)navigationBarItemThemeEvent:(_Bool)arg1;
+ (id)changeNavigationBarColorEvent:(_Bool)arg1;
@property(nonatomic) _Bool isLightTheme; // @synthesize isLightTheme=_isLightTheme;
@property(nonatomic) _Bool resetColor; // @synthesize resetColor=_resetColor;
@property(nonatomic) _Bool shouldChangeTitleColor; // @synthesize shouldChangeTitleColor=_shouldChangeTitleColor;
@property(nonatomic) _Bool shouldSetDefaultColor; // @synthesize shouldSetDefaultColor=_shouldSetDefaultColor;

@end

