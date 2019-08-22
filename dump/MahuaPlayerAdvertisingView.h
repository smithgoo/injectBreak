//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIImageView;

@interface MahuaPlayerAdvertisingView : UIView
{
    CDUnknownBlockType _didSelectItemAtIndex;
    NSArray *_bootadsList;
    UIButton *_closeBtn;
    UIImageView *_imageView;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSArray *bootadsList; // @synthesize bootadsList=_bootadsList;
@property(copy, nonatomic) CDUnknownBlockType didSelectItemAtIndex; // @synthesize didSelectItemAtIndex=_didSelectItemAtIndex;
- (void).cxx_destruct;
- (void)closeBtnClick;
- (void)imageViewClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

