//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MahuaHotItemDetailModel, MahuaMovieIntroModel, MahuaVideoModel, NSDictionary, NSString, UIImage;

@interface MahuaShareView : UIView <UIGestureRecognizerDelegate>
{
    MahuaMovieIntroModel *_model;
    MahuaVideoModel *_videoModel;
    MahuaHotItemDetailModel *_itemModel;
    NSDictionary *_dict;
    NSDictionary *_dict2;
    NSDictionary *_dict3;
    NSDictionary *_gameDic;
    CDUnknownBlockType _closeShareView;
    CDUnknownBlockType _copyLinkAction;
    long long _type;
    long long _positionType;
    long long _eventType;
    CDUnknownBlockType _shareImage;
    UIImage *_imageO;
    UIView *_shareAlertView;
    long long _shareType;
}

@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) UIView *shareAlertView; // @synthesize shareAlertView=_shareAlertView;
@property(retain, nonatomic) UIImage *imageO; // @synthesize imageO=_imageO;
@property(copy, nonatomic) CDUnknownBlockType shareImage; // @synthesize shareImage=_shareImage;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType copyLinkAction; // @synthesize copyLinkAction=_copyLinkAction;
@property(copy, nonatomic) CDUnknownBlockType closeShareView; // @synthesize closeShareView=_closeShareView;
@property(retain, nonatomic) NSDictionary *gameDic; // @synthesize gameDic=_gameDic;
@property(retain, nonatomic) NSDictionary *dict3; // @synthesize dict3=_dict3;
@property(retain, nonatomic) NSDictionary *dict2; // @synthesize dict2=_dict2;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) MahuaHotItemDetailModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) MahuaVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) MahuaMovieIntroModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)hideAnimation;
- (void)showAnimation;
- (void)shareQQ:(_Bool)arg1;
- (void)shareWeiBo;
- (struct CGRect)defaultShareAlertViewFrame;
- (void)cancelBtnClick;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)isShareToPengyouquan:(_Bool)arg1;
- (void)goWeiBo;
- (void)goQQZone;
- (void)goQQ;
- (void)goCopy;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)savePic;
- (void)shareBtnClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andFromType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

