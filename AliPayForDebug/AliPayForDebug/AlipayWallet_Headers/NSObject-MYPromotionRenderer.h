//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (MYPromotionRenderer)
- (struct CGRect)maya_convertRect:(struct CGRect)arg1 toRenderer:(id)arg2;
- (struct CGRect)maya_convertRect:(struct CGRect)arg1 toAsyncView:(id)arg2;
- (id)maya_perform_convertRect:(id)arg1 toAsyncView:(id)arg2;
- (_Bool)maya_containPoint:(struct CGPoint)arg1 inAsyncView:(id)arg2;
- (id)maya_perform_containPoint:(id)arg1 inAsyncView:(id)arg2;
- (id)mayaPromotion_parentRenderSelector;
- (id)mayaPromotion_generateRenderSelector;
- (id)maya_simplifySelector:(id)arg1;
- (struct CGRect)maya_renderFrameInAsyncView;
- (id)maya_render_selector;
@property(nonatomic) __weak id maya_renderBackingView;
@end

