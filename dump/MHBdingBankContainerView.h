//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MHMeButton, MHPlaceModel, NSArray, NSDictionary, NSString, UIButton, UILabel, UIPickerView, UITextField;

@interface MHBdingBankContainerView : UIView <UITextFieldDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    CDUnknownBlockType _bindBankAccount;
    UIView *_containerView;
    UITextField *_accountBank_textField;
    MHMeButton *_bankName_btn;
    UITextField *_nameBack_textField;
    UIView *_place_view;
    UILabel *_placeTitleLabel;
    MHMeButton *_place_btn;
    UITextField *_openBank_textField;
    UIButton *_submitBank_btn;
    NSDictionary *_currentDictI;
    NSDictionary *_bankIDNameDictI;
    UIView *_selectPlace_view;
    UIPickerView *_pickerView;
    NSArray *_dataAryI;
    MHPlaceModel *_placeModel;
    NSArray *_selectCityAryI;
    NSString *_bankProvince;
    NSString *_bankCity;
}

@property(copy, nonatomic) NSString *bankCity; // @synthesize bankCity=_bankCity;
@property(copy, nonatomic) NSString *bankProvince; // @synthesize bankProvince=_bankProvince;
@property(retain, nonatomic) NSArray *selectCityAryI; // @synthesize selectCityAryI=_selectCityAryI;
@property(retain, nonatomic) MHPlaceModel *placeModel; // @synthesize placeModel=_placeModel;
@property(copy, nonatomic) NSArray *dataAryI; // @synthesize dataAryI=_dataAryI;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *selectPlace_view; // @synthesize selectPlace_view=_selectPlace_view;
@property(copy, nonatomic) NSDictionary *bankIDNameDictI; // @synthesize bankIDNameDictI=_bankIDNameDictI;
@property(copy, nonatomic) NSDictionary *currentDictI; // @synthesize currentDictI=_currentDictI;
@property(retain, nonatomic) UIButton *submitBank_btn; // @synthesize submitBank_btn=_submitBank_btn;
@property(retain, nonatomic) UITextField *openBank_textField; // @synthesize openBank_textField=_openBank_textField;
@property(retain, nonatomic) MHMeButton *place_btn; // @synthesize place_btn=_place_btn;
@property(retain, nonatomic) UILabel *placeTitleLabel; // @synthesize placeTitleLabel=_placeTitleLabel;
@property(retain, nonatomic) UIView *place_view; // @synthesize place_view=_place_view;
@property(retain, nonatomic) UITextField *nameBack_textField; // @synthesize nameBack_textField=_nameBack_textField;
@property(retain, nonatomic) MHMeButton *bankName_btn; // @synthesize bankName_btn=_bankName_btn;
@property(retain, nonatomic) UITextField *accountBank_textField; // @synthesize accountBank_textField=_accountBank_textField;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType bindBankAccount; // @synthesize bindBankAccount=_bindBankAccount;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)textFiledEditChangedBank:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_judgeBankCardNumberType:(_Bool)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)okBtnAction;
- (void)cancelBtnAction;
- (void)_bindingBank;
- (void)submitBankBtnAction;
- (void)selectPlaceBtnAction;
- (void)selectBankBtnAction;
- (void)_loadBankData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

