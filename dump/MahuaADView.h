//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLAnimatedImageView, NSMutableArray, NSString, NSTimer, UIButton;

@interface MahuaADView : UIView
{
    _Bool _shenhe;
    _Bool _autoJump;
    _Bool _isFirstOpen;
    FLAnimatedImageView *_lanchImageView;
    NSTimer *_timer;
    UIButton *_jumpBtn;
    NSMutableArray *_bannerArray;
    NSString *_version;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isFirstOpen; // @synthesize isFirstOpen=_isFirstOpen;
@property(nonatomic) _Bool autoJump; // @synthesize autoJump=_autoJump;
@property(nonatomic) _Bool shenhe; // @synthesize shenhe=_shenhe;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(retain, nonatomic) UIButton *jumpBtn; // @synthesize jumpBtn=_jumpBtn;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FLAnimatedImageView *lanchImageView; // @synthesize lanchImageView=_lanchImageView;
- (void).cxx_destruct;
- (void)requestShareData;
- (void)setUpScrollView;
- (void)isFirstLoading;
- (void)adClickWithID:(long long)arg1;
- (void)jumpToRootViewCtrl;
- (void)getRegistNum;
- (void)postJsonToServer;
- (void)getLunchCache;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupLanchImageV;
- (void)addJumpBtn;
- (void)setUpUI;
- (void)timeChange;
- (void)postVersionRequest;
- (id)initWithFrame:(struct CGRect)arg1;

@end

