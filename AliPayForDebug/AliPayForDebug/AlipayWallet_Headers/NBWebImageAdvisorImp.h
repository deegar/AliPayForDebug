//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NBWebImageAdvisor-Protocol.h"

@class NSString;

@interface NBWebImageAdvisorImp : NSObject <NBWebImageAdvisor>
{
}

- (id)downloadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)imageView:(id)arg1 setImageWithURL:(id)arg2 placeholderImage:(id)arg3;
- (void)imageView:(id)arg1 setImageWithURL:(id)arg2;
- (void)button:(id)arg1 setBackgroundImageWithURL:(id)arg2 forState:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)button:(id)arg1 setBackgroundImageWithURL:(id)arg2 forState:(unsigned long long)arg3;
- (void)button:(id)arg1 setImageWithURL:(id)arg2 forState:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

