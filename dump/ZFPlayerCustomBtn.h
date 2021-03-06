//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MahuaVideoFormatExtraModel, NSString, UIView;

@interface ZFPlayerCustomBtn : UIButton
{
    _Bool _pictureBtn;
    _Bool _videoQuality;
    _Bool _videoSQuality;
    _Bool _videoSetting;
    _Bool _share;
    _Bool _hot;
    _Bool _leftPicRight;
    _Bool _comment;
    _Bool _smallShare;
    _Bool _lockScreen;
    _Bool _pick;
    _Bool _customBtn;
    _Bool _normalTitle;
    MahuaVideoFormatExtraModel *_formatExtraModel;
    NSString *_selVideoLevel;
    long long _sortNum;
    UIView *_blackView;
    double _btnH;
    double _btnW;
    double _imageWH;
    double _imageH;
    double _imageW;
    double _titleH;
    double _titleW;
    double _space;
}

@property(nonatomic) _Bool normalTitle; // @synthesize normalTitle=_normalTitle;
@property(nonatomic) _Bool customBtn; // @synthesize customBtn=_customBtn;
@property(nonatomic) _Bool pick; // @synthesize pick=_pick;
@property(nonatomic) _Bool lockScreen; // @synthesize lockScreen=_lockScreen;
@property(nonatomic) _Bool smallShare; // @synthesize smallShare=_smallShare;
@property(nonatomic) _Bool comment; // @synthesize comment=_comment;
@property(nonatomic) _Bool leftPicRight; // @synthesize leftPicRight=_leftPicRight;
@property(nonatomic) _Bool hot; // @synthesize hot=_hot;
@property(nonatomic) _Bool share; // @synthesize share=_share;
@property(nonatomic) _Bool videoSetting; // @synthesize videoSetting=_videoSetting;
@property(nonatomic) _Bool videoSQuality; // @synthesize videoSQuality=_videoSQuality;
@property(nonatomic) _Bool videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool pictureBtn; // @synthesize pictureBtn=_pictureBtn;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) double titleW; // @synthesize titleW=_titleW;
@property(nonatomic) double titleH; // @synthesize titleH=_titleH;
@property(nonatomic) double imageW; // @synthesize imageW=_imageW;
@property(nonatomic) double imageH; // @synthesize imageH=_imageH;
@property(nonatomic) double imageWH; // @synthesize imageWH=_imageWH;
@property(nonatomic) double btnW; // @synthesize btnW=_btnW;
@property(nonatomic) double btnH; // @synthesize btnH=_btnH;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(nonatomic) long long sortNum; // @synthesize sortNum=_sortNum;
@property(retain, nonatomic) NSString *selVideoLevel; // @synthesize selVideoLevel=_selVideoLevel;
@property(retain, nonatomic) MahuaVideoFormatExtraModel *formatExtraModel; // @synthesize formatExtraModel=_formatExtraModel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setBase;
- (id)initWithFrame:(struct CGRect)arg1 customBtnWithImage:(id)arg2 withSelImage:(id)arg3 withTitle:(id)arg4 withSelTitle:(id)arg5 withTitleColor:(id)arg6 withSelTitleColor:(id)arg7 WithTitleFont:(double)arg8 withTitleW:(double)arg9 withTitleH:(double)arg10 withImageW:(double)arg11 withImageH:(double)arg12 withSpace:(double)arg13;
- (id)initWithFrame:(struct CGRect)arg1 withPickImage:(id)arg2 withTitle:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 withLockScreenImage:(id)arg2 selImage:(id)arg3 withTitle:(id)arg4 withSeltitle:(id)arg5 withImageW:(double)arg6 withImageH:(double)arg7;
- (id)initWithFrame:(struct CGRect)arg1 withSmallShareImage:(id)arg2 withTitle:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 withCommentImage:(id)arg2 selImage:(id)arg3 withTitle:(id)arg4 withImageW:(double)arg5 withImageH:(double)arg6;
- (id)initWithFrame:(struct CGRect)arg1 withLeftPicImage:(id)arg2 withTitle:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 withHotImage:(id)arg2 withTitle:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 withShareImage:(id)arg2 withTitle:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 withNorImage:(id)arg2 selImage:(id)arg3 withTitle:(id)arg4 withSeltitle:(id)arg5 withImageW:(double)arg6 withImageH:(double)arg7;
- (id)initWithFrame:(struct CGRect)arg1 videoQualitywithTitle:(id)arg2 withImage:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 videoQualitywithTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withNormalTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 Image:(id)arg2 selImage:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 Image:(id)arg2 selImage:(id)arg3 withImageW:(double)arg4 withImageH:(double)arg5 isBlackBall:(_Bool)arg6 withBallWH:(double)arg7 withAlpha:(double)arg8;

@end

