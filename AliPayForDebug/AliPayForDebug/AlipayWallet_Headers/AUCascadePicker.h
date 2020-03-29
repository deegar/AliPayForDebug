//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUPickerBaseView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class AUCascadePickerModel, NSString;
@protocol AUCascadePickerDelegate;

@interface AUCascadePicker : AUPickerBaseView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    AUCascadePickerModel *_dataModel;
    long long _numberOfComponents;
    id <AUCascadePickerDelegate> _linkageDelegate;
    double _miniScale;
}

+ (void)handleData:(id)arg1 selectedItem:(id)arg2 level:(long long)arg3;
+ (void)handleModelData:(id)arg1 selectedItem:(id)arg2 level:(long long)arg3;
+ (id)changeParamsToDataModel:(id)arg1;
@property(nonatomic) double miniScale; // @synthesize miniScale=_miniScale;
@property(nonatomic) __weak id <AUCascadePickerDelegate> linkageDelegate; // @synthesize linkageDelegate=_linkageDelegate;
@property(nonatomic) long long numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
@property(retain, nonatomic) AUCascadePickerModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)updateTitlesWithSelectRow:(long long)arg1 inComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)calculateNumOfRowsInComponent:(long long)arg1;
- (id)findSubList:(id)arg1 component:(long long)arg2;
- (long long)calculteNumOfRowsInComponent:(long long)arg1;
- (void)calculateNumberOfComponentWithStart:(long long)arg1 dataList:(id)arg2;
- (void)reloadSelectedRowInComponents;
- (long long)findSelectedTitle:(id)arg1 inArray:(id)arg2;
- (void)checkSelecteditemValid:(id)arg1 level:(long long)arg2 data:(id)arg3;
- (void)checkSelectedItemWithData:(id)arg1 level:(long long)arg2;
- (id)initWithPickerModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

