//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "MahuaLoginRegisterTextFieldDelegate.h"
#import "UITextFieldDelegate.h"

@class CountryModel, MahuaLoginRegisterTextField, NSString, UIButton, UILabel;

@interface MahuaYanZhMaVC : MahuaParentsViewController <UITextFieldDelegate, MahuaLoginRegisterTextFieldDelegate>
{
    CDUnknownBlockType _joinSpreadBlock;
    NSString *_countryCode;
    NSString *_phoneEmailNumber;
    NSString *_invitationCode;
    long long _type;
    MahuaLoginRegisterTextField *_yanZhengMa;
    UIButton *_yanzhengmaButton;
    UIButton *_submitButton;
    UILabel *_titleLabel;
    MahuaLoginRegisterTextField *_psdTF;
    UILabel *_countryLabel;
    CountryModel *_selectedCountryModel;
    NSString *_countryCodeNews;
}

@property(retain, nonatomic) NSString *countryCodeNews; // @synthesize countryCodeNews=_countryCodeNews;
@property(retain, nonatomic) CountryModel *selectedCountryModel; // @synthesize selectedCountryModel=_selectedCountryModel;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) MahuaLoginRegisterTextField *psdTF; // @synthesize psdTF=_psdTF;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIButton *yanzhengmaButton; // @synthesize yanzhengmaButton=_yanzhengmaButton;
@property(retain, nonatomic) MahuaLoginRegisterTextField *yanZhengMa; // @synthesize yanZhengMa=_yanZhengMa;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *invitationCode; // @synthesize invitationCode=_invitationCode;
@property(retain, nonatomic) NSString *phoneEmailNumber; // @synthesize phoneEmailNumber=_phoneEmailNumber;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) CDUnknownBlockType joinSpreadBlock; // @synthesize joinSpreadBlock=_joinSpreadBlock;
- (void).cxx_destruct;
- (void)countryViewClick;
- (void)back;
- (void)seePsd:(id)arg1;
- (void)seePsdDown:(id)arg1;
- (void)panduanSubmitBtn;
- (void)viewTapClick1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)loginRegistertextDidChange:(id)arg1;
- (void)nextBtnClick;
- (void)changePhoneNumberLastType;
- (void)changePhoneNumber;
- (void)forgetPsd;
- (void)changePsd;
- (void)zhuCePsd;
- (void)bangDing;
- (void)changePhoneNumberYZM;
- (void)yanZhengMaBtnClick;
- (void)setUpZhuCe;
- (void)setUpUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithphoneEmailNumber:(id)arg1 andInvitationCode:(id)arg2 setPsdType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

