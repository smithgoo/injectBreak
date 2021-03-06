//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MHResourceSetDelegate.h"
#import "ZFPlayerControlViewDelagate.h"
#import "ZFPlayerMediaControl.h"
#import "ZFSliderViewDelegate.h"

@class MahuaAlertView, MahuaExchangeModel, MahuaLockScreenView, MahuaMovieIntroModel, MahuaPlayerAdvertisingView, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, ZFLandScapeControlView, ZFPlayerController, ZFPortraitControlView, ZFSliderView, ZFSmallFloatControlView, ZFVolumeBrightnessView;

@interface ZFPlayerControlView : UIView <ZFSliderViewDelegate, MHResourceSetDelegate, ZFPlayerMediaControl, ZFPlayerControlViewDelagate>
{
    _Bool _isDownloadVideo;
    _Bool _controlViewAppeared;
    _Bool _burrering;
    _Bool _launchScreen;
    _Bool _isFirstLoad;
    _Bool _repeatPlay;
    _Bool _isMovie;
    _Bool _isBarrageOpen;
    _Bool _playerIsFail;
    _Bool _isSeekTime;
    _Bool _isReplaySeek;
    _Bool _isWillChange;
    _Bool _isGifShot;
    _Bool _isStalled;
    _Bool _isShowRW;
    _Bool _isShowGifOrScreenshot;
    _Bool _isTryPlay;
    _Bool _showBarragePop;
    _Bool _ADShow;
    _Bool _isOver;
    _Bool _showing;
    _Bool _isFromSmall;
    ZFPlayerController *_player;
    MahuaLockScreenView *_lockScreenView;
    UILabel *_failLab;
    UIImage *_placeholderImage;
    NSString *_downLoadResolution;
    MahuaAlertView *_alertView;
    MahuaPlayerAdvertisingView *_adView;
    NSString *_playerRate;
    MahuaExchangeModel *_can1080Model;
    NSMutableArray *_guessULISource;
    MahuaMovieIntroModel *_movieIntroModel;
    id <ZFPlayerControlViewDelagate> _delegate;
    ZFPortraitControlView *_portraitControlView;
    ZFLandScapeControlView *_landScapeControlView;
    UIView *_fastView;
    ZFSliderView *_fastProgressView;
    UILabel *_fastTimeLabel;
    UIImageView *_fastImageView;
    UIButton *_failBtn;
    UIButton *_feedBackBtn;
    ZFSliderView *_bottomPgrogress;
    UIImageView *_coverImageView;
    UIButton *_repeatBtn;
    double _sumTime;
    CDUnknownBlockType _afterBlock;
    ZFSmallFloatControlView *_floatControlView;
    ZFVolumeBrightnessView *_volumeBrightnessView;
    long long _lastOrientation;
    long long _failedTime;
}

@property(nonatomic) long long failedTime; // @synthesize failedTime=_failedTime;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) _Bool isFromSmall; // @synthesize isFromSmall=_isFromSmall;
@property(retain, nonatomic) ZFVolumeBrightnessView *volumeBrightnessView; // @synthesize volumeBrightnessView=_volumeBrightnessView;
@property(retain, nonatomic) ZFSmallFloatControlView *floatControlView; // @synthesize floatControlView=_floatControlView;
@property(copy, nonatomic) CDUnknownBlockType afterBlock; // @synthesize afterBlock=_afterBlock;
@property(nonatomic) double sumTime; // @synthesize sumTime=_sumTime;
@property(nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) UIButton *repeatBtn; // @synthesize repeatBtn=_repeatBtn;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) ZFSliderView *bottomPgrogress; // @synthesize bottomPgrogress=_bottomPgrogress;
@property(retain, nonatomic) UIButton *feedBackBtn; // @synthesize feedBackBtn=_feedBackBtn;
@property(retain, nonatomic) UIButton *failBtn; // @synthesize failBtn=_failBtn;
@property(retain, nonatomic) UIImageView *fastImageView; // @synthesize fastImageView=_fastImageView;
@property(retain, nonatomic) UILabel *fastTimeLabel; // @synthesize fastTimeLabel=_fastTimeLabel;
@property(retain, nonatomic) ZFSliderView *fastProgressView; // @synthesize fastProgressView=_fastProgressView;
@property(retain, nonatomic) UIView *fastView; // @synthesize fastView=_fastView;
@property(retain, nonatomic) ZFLandScapeControlView *landScapeControlView; // @synthesize landScapeControlView=_landScapeControlView;
@property(retain, nonatomic) ZFPortraitControlView *portraitControlView; // @synthesize portraitControlView=_portraitControlView;
@property(nonatomic) __weak id <ZFPlayerControlViewDelagate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isOver; // @synthesize isOver=_isOver;
@property(retain, nonatomic) MahuaMovieIntroModel *movieIntroModel; // @synthesize movieIntroModel=_movieIntroModel;
@property(retain, nonatomic) NSMutableArray *guessULISource; // @synthesize guessULISource=_guessULISource;
@property(retain, nonatomic) MahuaExchangeModel *can1080Model; // @synthesize can1080Model=_can1080Model;
@property(nonatomic) _Bool ADShow; // @synthesize ADShow=_ADShow;
@property(nonatomic) _Bool showBarragePop; // @synthesize showBarragePop=_showBarragePop;
@property(nonatomic) _Bool isTryPlay; // @synthesize isTryPlay=_isTryPlay;
@property(nonatomic) _Bool isShowGifOrScreenshot; // @synthesize isShowGifOrScreenshot=_isShowGifOrScreenshot;
@property(nonatomic) _Bool isShowRW; // @synthesize isShowRW=_isShowRW;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) _Bool isGifShot; // @synthesize isGifShot=_isGifShot;
@property(retain, nonatomic) NSString *playerRate; // @synthesize playerRate=_playerRate;
@property(nonatomic) _Bool isWillChange; // @synthesize isWillChange=_isWillChange;
@property(nonatomic) _Bool isReplaySeek; // @synthesize isReplaySeek=_isReplaySeek;
@property(nonatomic) _Bool isSeekTime; // @synthesize isSeekTime=_isSeekTime;
@property(nonatomic) _Bool playerIsFail; // @synthesize playerIsFail=_playerIsFail;
@property(nonatomic) _Bool isBarrageOpen; // @synthesize isBarrageOpen=_isBarrageOpen;
@property(retain, nonatomic) MahuaPlayerAdvertisingView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) MahuaAlertView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) NSString *downLoadResolution; // @synthesize downLoadResolution=_downLoadResolution;
@property(nonatomic) _Bool isMovie; // @synthesize isMovie=_isMovie;
@property(nonatomic) _Bool repeatPlay; // @synthesize repeatPlay=_repeatPlay;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic, getter=isLaunchScreen) _Bool launchScreen; // @synthesize launchScreen=_launchScreen;
@property(nonatomic, getter=isBurrering) _Bool burrering; // @synthesize burrering=_burrering;
@property(nonatomic) _Bool controlViewAppeared; // @synthesize controlViewAppeared=_controlViewAppeared;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool isDownloadVideo; // @synthesize isDownloadVideo=_isDownloadVideo;
@property(retain, nonatomic) UILabel *failLab; // @synthesize failLab=_failLab;
@property(retain, nonatomic) MahuaLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
@property(nonatomic) __weak ZFPlayerController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)zf_goGuessULikeIt:(long long)arg1;
- (void)zf_goSharePic;
- (void)zf_barrageSettingSpeed:(float)arg1;
- (void)zf_barrageSettingArea:(float)arg1;
- (void)zf_barrageSettingText:(float)arg1;
- (void)zf_barrageSettingAlpha:(float)arg1;
- (void)zf_airShowUnKnow;
- (void)zf_goShareBack:(id)arg1;
- (void)zf_showFirstEditing;
- (void)zf_get1080URL:(id)arg1;
- (void)zf_buyBlueLight;
- (void)zf_earnMoney;
- (void)zf_fullScreenNotLogin;
- (void)zf_getDetailVideoURL;
- (void)stopGifRecord;
- (void)beginGifRecord;
- (void)zf_setPlayerRate:(id)arg1;
- (void)zf_zearoPlayVideo;
- (void)zf_repeatToTimePlayVideo:(double)arg1;
- (void)zf_playAction:(_Bool)arg1;
- (void)zf_collectTheVideo:(_Bool)arg1;
- (void)zf_shareBack:(long long)arg1;
- (void)zf_changeResolution:(id)arg1 andSortNum:(long long)arg2;
- (void)zf_changeResolution:(id)arg1;
- (void)zf_textFieldDidChange:(id)arg1;
- (_Bool)zf_textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)zf_textFieldShouldBeginEditing:(id)arg1;
- (_Bool)zf_textFieldShouldReturn:(id)arg1;
- (void)zf_exitApplicationAfterTime:(double)arg1;
- (void)zf_enterFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)zf_airPlayChangeresolution;
- (void)zf_airPlayChangeDevice;
- (void)zf_airPlayEnd;
- (void)zf_airPlayAction;
- (void)zf_shareAction;
- (void)zf_fastBackSecond:(long long)arg1;
- (void)zf_fastForwardSecond:(long long)arg1;
- (void)zf_barrgeAction:(_Bool)arg1;
- (void)zf_playAction:(_Bool)arg1 isShowAD:(_Bool)arg2;
- (void)zf_playerPreviousAction;
- (void)zf_playerNextAction;
- (void)zf_backAction;
- (void)zf_playerResetFrameAction;
- (void)hideGuessULIView;
- (void)showGuessULIView;
- (void)hiddenJumpShare;
- (void)showJumpShareView:(id)arg1 withNum:(long long)arg2;
- (void)getResult:(id)arg1;
- (void)showJumpShare:(id)arg1;
- (void)endAirPlay;
- (void)feedBackBtnClick;
- (void)failBtnClick;
- (void)repeatBtnClick:(id)arg1;
- (void)restartAirPlayTime;
- (void)hideFastView;
- (void)sliderValueChangingValue:(double)arg1 isForward:(_Bool)arg2;
- (void)sliderValueChangingValueAndCurrentLabel;
- (_Bool)isShowPreviousBtn;
- (_Bool)isShowNextBtn;
- (void)playerDidDisappearInScrollView:(id)arg1;
- (void)playerDidAppearInScrollView:(id)arg1;
- (void)lockedVideoPlayer:(id)arg1 lockedScreen:(_Bool)arg2;
- (void)videoPlayerPlayFailed:(id)arg1 error:(id)arg2;
- (void)videoPlayerPlayEnd:(id)arg1;
- (void)isShowRepeatBtn:(_Bool)arg1;
- (void)videoPlayer:(id)arg1 orientationDidChanged:(id)arg2;
- (void)hiddeTryPlayView;
- (void)dealWithFailBtn:(_Bool)arg1;
- (void)dismissSettingViews;
- (void)videoPlayer:(id)arg1 orientationWillChange:(id)arg2;
- (void)setKeyBoard;
- (void)videoPlayer:(id)arg1 bufferTime:(double)arg2;
- (void)videoPlayer:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)restartRender;
- (void)stopAni;
- (void)startBuffer;
- (void)videoPlayer:(id)arg1 loadStateChanged:(unsigned long long)arg2;
- (void)clearPlay;
- (void)videoPlayer:(id)arg1 playStateChanged:(unsigned long long)arg2;
- (void)videoPlayer:(id)arg1 prepareToPlay:(id)arg2;
- (void)gesturePinched:(id)arg1 scale:(float)arg2;
- (void)gestureEndedPan:(id)arg1 panDirection:(unsigned long long)arg2 panLocation:(unsigned long long)arg3;
- (void)videoSliderFailWatch;
- (void)videoSliderFastWatch;
- (void)gestureChangedPan:(id)arg1 panDirection:(unsigned long long)arg2 panLocation:(unsigned long long)arg3 withVelocity:(struct CGPoint)arg4;
- (void)gestureBeganPan:(id)arg1 panDirection:(unsigned long long)arg2 panLocation:(unsigned long long)arg3;
- (void)gestureDoubleTapped:(id)arg1;
- (void)gestureSingleTapped:(id)arg1;
- (void)landPlayReturnHome;
- (_Bool)gestureTriggerCondition:(id)arg1 gestureType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 touch:(id)arg4;
- (void)showTitle:(id)arg1 coverURLString:(id)arg2 fullScreenMode:(unsigned long long)arg3;
- (void)hiddenBtnAndViews;
- (void)resetControlView;
- (void)hiddenActivity;
- (void)volumeChanged:(id)arg1;
- (void)showControlViewWithAnimated:(_Bool)arg1;
- (void)showControlView;
- (void)hideControlViewWithAnimated:(_Bool)arg1;
- (void)cancelAutoFadeOutControlView;
- (void)autoFadeOutControlView;
- (void)addAllSubViews;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

