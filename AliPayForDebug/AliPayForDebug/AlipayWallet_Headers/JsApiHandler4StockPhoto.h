//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFWStockJSAPIHandler-Protocol.h"

@class AFTPImagePicker;

@interface JsApiHandler4StockPhoto : NSObject <AFWStockJSAPIHandler>
{
    AFTPImagePicker *_picker;
}

@property(retain, nonatomic) AFTPImagePicker *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (void)handle:(id)arg1 baseOnVC:(id)arg2 baseOnWebView:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

