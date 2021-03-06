//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage, UIImageView, UITapGestureRecognizer, ZFSliderButton;

@interface ZFSliderView : UIView
{
    _Bool _allowTapped;
    _Bool _animate;
    _Bool _isHideSliderBlock;
    _Bool _isdragging;
    _Bool _isForward;
    float _value;
    float _bufferValue;
    id <ZFSliderViewDelegate> _delegate;
    UIColor *_maximumTrackTintColor;
    UIColor *_minimumTrackTintColor;
    UIColor *_bufferTrackTintColor;
    UIImage *_maximumTrackImage;
    UIImage *_minimumTrackImage;
    UIImage *_bufferTrackImage;
    double _sliderHeight;
    UIImageView *_bgProgressView;
    UIImageView *_bufferProgressView;
    UIImageView *_sliderProgressView;
    ZFSliderButton *_sliderBtn;
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint _lastPoint;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) ZFSliderButton *sliderBtn; // @synthesize sliderBtn=_sliderBtn;
@property(retain, nonatomic) UIImageView *sliderProgressView; // @synthesize sliderProgressView=_sliderProgressView;
@property(retain, nonatomic) UIImageView *bufferProgressView; // @synthesize bufferProgressView=_bufferProgressView;
@property(retain, nonatomic) UIImageView *bgProgressView; // @synthesize bgProgressView=_bgProgressView;
@property(nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(nonatomic) _Bool isdragging; // @synthesize isdragging=_isdragging;
@property(nonatomic) _Bool isHideSliderBlock; // @synthesize isHideSliderBlock=_isHideSliderBlock;
@property(nonatomic) double sliderHeight; // @synthesize sliderHeight=_sliderHeight;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
@property(nonatomic) _Bool allowTapped; // @synthesize allowTapped=_allowTapped;
@property(nonatomic) float bufferValue; // @synthesize bufferValue=_bufferValue;
@property(nonatomic) float value; // @synthesize value=_value;
@property(retain, nonatomic) UIImage *bufferTrackImage; // @synthesize bufferTrackImage=_bufferTrackImage;
@property(retain, nonatomic) UIImage *minimumTrackImage; // @synthesize minimumTrackImage=_minimumTrackImage;
@property(retain, nonatomic) UIImage *maximumTrackImage; // @synthesize maximumTrackImage=_maximumTrackImage;
@property(retain, nonatomic) UIColor *bufferTrackTintColor; // @synthesize bufferTrackTintColor=_bufferTrackTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minimumTrackTintColor;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maximumTrackTintColor;
@property(nonatomic) __weak id <ZFSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)sliderBtnDragMoving:(id)arg1 event:(id)arg2;
- (void)sliderBtnTouchEnded:(id)arg1;
- (void)sliderBtnTouchBegin:(id)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)addSubViews;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

