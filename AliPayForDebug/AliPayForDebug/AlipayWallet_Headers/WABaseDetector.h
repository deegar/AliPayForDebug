//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADetector.h"

@interface WABaseDetector : WADetector
{
    long long _status;
    struct CGRect _analyzeRect;
}

+ (_Bool)authorizeWhenCreateInWebView:(id)arg1;
@property(nonatomic) struct CGRect analyzeRect; // @synthesize analyzeRect=_analyzeRect;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)wrapCGRect:(struct CGRect)arg1;
- (void)onPageOptions:(id)arg1;
- (int)doInitAfterAuthorize:(id)arg1;
- (void)onInit:(id)arg1;

@end

