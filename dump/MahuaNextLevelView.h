//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MahuaMovieIntroModel, UIButton, UILabel;

@interface MahuaNextLevelView : UIView
{
    _Bool _isShow;
    _Bool _noShow;
    MahuaMovieIntroModel *_movieIntroModel;
    CDUnknownBlockType _chooseNextVideoClick;
    CDUnknownBlockType _closeNextVideoClick;
    UILabel *_changeFirstLab;
    UIButton *_changeLevelBtn;
    UIButton *_closeBtn;
    double _scaleW;
    double _scaleH;
}

@property(nonatomic) double scaleH; // @synthesize scaleH=_scaleH;
@property(nonatomic) double scaleW; // @synthesize scaleW=_scaleW;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *changeLevelBtn; // @synthesize changeLevelBtn=_changeLevelBtn;
@property(retain, nonatomic) UILabel *changeFirstLab; // @synthesize changeFirstLab=_changeFirstLab;
@property(nonatomic) _Bool noShow; // @synthesize noShow=_noShow;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) CDUnknownBlockType closeNextVideoClick; // @synthesize closeNextVideoClick=_closeNextVideoClick;
@property(copy, nonatomic) CDUnknownBlockType chooseNextVideoClick; // @synthesize chooseNextVideoClick=_chooseNextVideoClick;
@property(retain, nonatomic) MahuaMovieIntroModel *movieIntroModel; // @synthesize movieIntroModel=_movieIntroModel;
- (void).cxx_destruct;
- (void)hide;
- (void)closeBtnClick;
- (void)changeLevelBtnClick;
- (id)resolutionTitleWithType:(id)arg1;
- (id)chooseNextLevel;
- (void)showChangeView;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
