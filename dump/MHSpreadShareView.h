//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MHSpreadBottomShareView, NSLayoutConstraint, NSString, UIImage, UIImageView;

@interface MHSpreadShareView : UIView
{
    UIImage *_qrImg;
    NSString *_shareString;
    UIImage *_shareImg;
    UIImageView *_qrImgView;
    NSLayoutConstraint *_containerVIewTop;
    UIView *_containerView;
    MHSpreadBottomShareView *_bottomShareView;
    NSLayoutConstraint *_containerWidth;
    NSLayoutConstraint *_containerHeight;
    NSLayoutConstraint *_qrWidth;
    NSLayoutConstraint *_qrHeight;
    NSLayoutConstraint *_qrTop;
}

@property(nonatomic) __weak NSLayoutConstraint *qrTop; // @synthesize qrTop=_qrTop;
@property(nonatomic) __weak NSLayoutConstraint *qrHeight; // @synthesize qrHeight=_qrHeight;
@property(nonatomic) __weak NSLayoutConstraint *qrWidth; // @synthesize qrWidth=_qrWidth;
@property(nonatomic) __weak NSLayoutConstraint *containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) __weak NSLayoutConstraint *containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) __weak MHSpreadBottomShareView *bottomShareView; // @synthesize bottomShareView=_bottomShareView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSLayoutConstraint *containerVIewTop; // @synthesize containerVIewTop=_containerVIewTop;
@property(nonatomic) __weak UIImageView *qrImgView; // @synthesize qrImgView=_qrImgView;
@property(retain, nonatomic) UIImage *shareImg; // @synthesize shareImg=_shareImg;
@property(copy, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
@property(retain, nonatomic) UIImage *qrImg; // @synthesize qrImg=_qrImg;
- (void).cxx_destruct;
- (void)tapClick;
- (void)copyLinkClick:(id)arg1;
- (id)snapshotWithView:(id)arg1;
- (void)awakeFromNib;

@end
