//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MahuaBarragePopView : UIView
{
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _goLoginAction;
    UIImageView *_imageView;
    UILabel *_titleLab;
    UIButton *_closeBtn;
    UIButton *_goLoginBtn;
}

@property(retain, nonatomic) UIButton *goLoginBtn; // @synthesize goLoginBtn=_goLoginBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType goLoginAction; // @synthesize goLoginAction=_goLoginAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (void)hiden;
- (void)goLoginBtnClick;
- (void)closeBtnClick;
- (void)show;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
