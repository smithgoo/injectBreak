//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface MahuaBangDingVC : MahuaParentsViewController <UITextFieldDelegate>
{
    long long _type;
    UITextField *_accountNumber;
    UIButton *_submitButton;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UITextField *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)panduanSubmitBtn;
- (void)viewTapClick1;
- (void)yanZhengMaBtnClick;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

