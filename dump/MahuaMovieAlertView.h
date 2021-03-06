//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MahuaExchangeModel, MahuaMoviePlayerVC, MahuaVideoModel, NSString, UILabel, ZFPlayerCustomBtn;

@interface MahuaMovieAlertView : UIView
{
    double _btnH;
    double _fullScreen;
    _Bool _showing;
    _Bool _network4G;
    MahuaMoviePlayerVC *_myVideoPlayerVC;
    MahuaVideoModel *_model;
    long long _type;
    MahuaExchangeModel *_exchangeModel;
    CDUnknownBlockType _playBtnBlock;
    CDUnknownBlockType _shareBtnBlock;
    CDUnknownBlockType _backBtnBlock;
    CDUnknownBlockType _closeBtnBlock;
    ZFPlayerCustomBtn *_backBtn;
    ZFPlayerCustomBtn *_playBtn;
    ZFPlayerCustomBtn *_shareBtn;
    UILabel *_netLabel;
    UILabel *_titleLabel;
    NSString *_resolution;
    UIView *_noForceContentView;
    UIView *_forceContentView;
    UIView *_normalView;
    UIView *_normalFourGView;
    NSString *_moneyStr;
    double _shareBtnW;
    double _playBtnW;
}

@property(nonatomic) double playBtnW; // @synthesize playBtnW=_playBtnW;
@property(nonatomic) double shareBtnW; // @synthesize shareBtnW=_shareBtnW;
@property(retain, nonatomic) NSString *moneyStr; // @synthesize moneyStr=_moneyStr;
@property(retain, nonatomic) UIView *normalFourGView; // @synthesize normalFourGView=_normalFourGView;
@property(retain, nonatomic) UIView *normalView; // @synthesize normalView=_normalView;
@property(retain, nonatomic) UIView *forceContentView; // @synthesize forceContentView=_forceContentView;
@property(retain, nonatomic) UIView *noForceContentView; // @synthesize noForceContentView=_noForceContentView;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *netLabel; // @synthesize netLabel=_netLabel;
@property(retain, nonatomic) ZFPlayerCustomBtn *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) ZFPlayerCustomBtn *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) ZFPlayerCustomBtn *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic, getter=isNetwork4G) _Bool network4G; // @synthesize network4G=_network4G;
@property(nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(copy, nonatomic) CDUnknownBlockType closeBtnBlock; // @synthesize closeBtnBlock=_closeBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType backBtnBlock; // @synthesize backBtnBlock=_backBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBtnBlock; // @synthesize shareBtnBlock=_shareBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType playBtnBlock; // @synthesize playBtnBlock=_playBtnBlock;
@property(retain, nonatomic) MahuaExchangeModel *exchangeModel; // @synthesize exchangeModel=_exchangeModel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MahuaVideoModel *model; // @synthesize model=_model;
@property(nonatomic) __weak MahuaMoviePlayerVC *myVideoPlayerVC; // @synthesize myVideoPlayerVC=_myVideoPlayerVC;
- (void).cxx_destruct;
- (void)resetPlayBtnTitle:(id)arg1;
- (void)hidden;
- (void)showWithType:(long long)arg1 model:(id)arg2 withExchangeModel:(id)arg3;
- (void)showWithType:(long long)arg1 model:(id)arg2;
- (void)closeBtnClick;
- (void)back;
- (void)shareClick;
- (void)playerPlaying;
- (void)initNetLabel;
- (void)initTitleLabel;
- (void)initPlayBtn;
- (void)initShareBtn;
- (struct CGSize)textSize:(id)arg1 font:(id)arg2 maxSize:(struct CGSize)arg3;
- (void)initBackBtn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

