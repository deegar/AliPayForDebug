//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RVKViewParam : NSObject
{
    Class _contentViewCls;
    NSString *_url;
    NSDictionary *_expandParams;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSDictionary *expandParams; // @synthesize expandParams=_expandParams;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) Class contentViewCls; // @synthesize contentViewCls=_contentViewCls;
- (void).cxx_destruct;
- (id)init;

@end

