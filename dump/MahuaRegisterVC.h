//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "MahuaLoginRegisterTextFieldDelegate.h"
#import "UITextFieldDelegate.h"

@class CountryModel, MahuaLoginRegisterTextField, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UIView;

@interface MahuaRegisterVC : MahuaParentsViewController <UITextFieldDelegate, MahuaLoginRegisterTextFieldDelegate>
{
    _Bool _isRead;
    CDUnknownBlockType _joinSpreadBlock;
    CDUnknownBlockType _loginSucessBlock;
    UIScrollView *_bgV;
    long long _type;
    UIImageView *_loginImageV;
    UIView *_loginMiddleV;
    UIView *_loginMiMaV;
    MahuaLoginRegisterTextField *_accountNumberFastLogin;
    MahuaLoginRegisterTextField *_yanZhengMa2;
    MahuaLoginRegisterTextField *_accountNumberPsdLogin;
    MahuaLoginRegisterTextField *_psdTF;
    UIButton *_submitButton2;
    UIButton *_yanzhengmaButton2;
    UIButton *_loginChangrBtn;
    UIImageView *_registerImageV;
    UIView *_registerMiddleV1;
    UIView *_registerMiddleV2;
    UIView *_invitationView;
    MahuaLoginRegisterTextField *_accountNumberRegister;
    UITextField *_emailTF;
    MahuaLoginRegisterTextField *_invitationCode;
    UIButton *_nextStepButton;
    UIButton *_selectButton;
    UIView *_bottomView;
    UILabel *_countryLabel;
    UILabel *_countryMiMaLabel;
    UILabel *_countryLoginLabel;
    UILabel *_countryRegisterLabel;
    CountryModel *_selectedCountryModel;
}

@property(retain, nonatomic) CountryModel *selectedCountryModel; // @synthesize selectedCountryModel=_selectedCountryModel;
@property(retain, nonatomic) UILabel *countryRegisterLabel; // @synthesize countryRegisterLabel=_countryRegisterLabel;
@property(retain, nonatomic) UILabel *countryLoginLabel; // @synthesize countryLoginLabel=_countryLoginLabel;
@property(retain, nonatomic) UILabel *countryMiMaLabel; // @synthesize countryMiMaLabel=_countryMiMaLabel;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) MahuaLoginRegisterTextField *invitationCode; // @synthesize invitationCode=_invitationCode;
@property(retain, nonatomic) UITextField *emailTF; // @synthesize emailTF=_emailTF;
@property(retain, nonatomic) MahuaLoginRegisterTextField *accountNumberRegister; // @synthesize accountNumberRegister=_accountNumberRegister;
@property(retain, nonatomic) UIView *invitationView; // @synthesize invitationView=_invitationView;
@property(retain, nonatomic) UIView *registerMiddleV2; // @synthesize registerMiddleV2=_registerMiddleV2;
@property(retain, nonatomic) UIView *registerMiddleV1; // @synthesize registerMiddleV1=_registerMiddleV1;
@property(retain, nonatomic) UIImageView *registerImageV; // @synthesize registerImageV=_registerImageV;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) UIButton *loginChangrBtn; // @synthesize loginChangrBtn=_loginChangrBtn;
@property(retain, nonatomic) UIButton *yanzhengmaButton2; // @synthesize yanzhengmaButton2=_yanzhengmaButton2;
@property(retain, nonatomic) UIButton *submitButton2; // @synthesize submitButton2=_submitButton2;
@property(retain, nonatomic) MahuaLoginRegisterTextField *psdTF; // @synthesize psdTF=_psdTF;
@property(retain, nonatomic) MahuaLoginRegisterTextField *accountNumberPsdLogin; // @synthesize accountNumberPsdLogin=_accountNumberPsdLogin;
@property(retain, nonatomic) MahuaLoginRegisterTextField *yanZhengMa2; // @synthesize yanZhengMa2=_yanZhengMa2;
@property(retain, nonatomic) MahuaLoginRegisterTextField *accountNumberFastLogin; // @synthesize accountNumberFastLogin=_accountNumberFastLogin;
@property(retain, nonatomic) UIView *loginMiMaV; // @synthesize loginMiMaV=_loginMiMaV;
@property(retain, nonatomic) UIView *loginMiddleV; // @synthesize loginMiddleV=_loginMiddleV;
@property(retain, nonatomic) UIImageView *loginImageV; // @synthesize loginImageV=_loginImageV;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIScrollView *bgV; // @synthesize bgV=_bgV;
@property(copy, nonatomic) CDUnknownBlockType loginSucessBlock; // @synthesize loginSucessBlock=_loginSucessBlock;
@property(copy, nonatomic) CDUnknownBlockType joinSpreadBlock; // @synthesize joinSpreadBlock=_joinSpreadBlock;
- (void).cxx_destruct;
- (void)seePsd:(id)arg1;
- (void)seePsdDown:(id)arg1;
- (void)countryViewClick;
- (void)invitaBtnClick:(id)arg1;
- (void)yanZhengMa:(id)arg1;
- (void)forgetBtnClick;
- (void)introBtnClick;
- (void)loginChange:(id)arg1;
- (void)loginRegisterClick:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)submitBtnClick;
- (void)yanZhengMaBtnClick2;
- (void)yanZhengMaBtnClick;
- (void)captchaSend;
- (void)queryInvitationExist;
- (void)judgeSubmitState;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)loginRegistertextDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewTapClick1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setUpUI;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

