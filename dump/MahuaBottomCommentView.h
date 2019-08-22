//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSNumber, NSString, UIButton, UITextField;

@interface MahuaBottomCommentView : UIView <UITextFieldDelegate>
{
    _Bool _isCollectState;
    _Bool _isBgViewShowing;
    UIButton *_collectBtn;
    NSNumber *_commentCount;
    CDUnknownBlockType _commentClickBlock;
    id <MahuaCommentProtocol> _delegate;
    CDUnknownBlockType _collectBtnClickBlock;
    CDUnknownBlockType _downloadBtnClickBlock;
    CDUnknownBlockType _showFirstEditing;
    UIButton *_downloadBtn;
    UITextField *_textField;
    UIView *_bgView;
}

@property(nonatomic) _Bool isBgViewShowing; // @synthesize isBgViewShowing=_isBgViewShowing;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(copy, nonatomic) CDUnknownBlockType showFirstEditing; // @synthesize showFirstEditing=_showFirstEditing;
@property(copy, nonatomic) CDUnknownBlockType downloadBtnClickBlock; // @synthesize downloadBtnClickBlock=_downloadBtnClickBlock;
@property(copy, nonatomic) CDUnknownBlockType collectBtnClickBlock; // @synthesize collectBtnClickBlock=_collectBtnClickBlock;
@property(nonatomic) __weak id <MahuaCommentProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isCollectState; // @synthesize isCollectState=_isCollectState;
@property(copy, nonatomic) CDUnknownBlockType commentClickBlock; // @synthesize commentClickBlock=_commentClickBlock;
@property(copy, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) UIButton *collectBtn; // @synthesize collectBtn=_collectBtn;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)adjustButton:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)collectBtnClick;
- (void)downloadBtnClick;
- (void)layoutSubviews;
- (void)p_initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
