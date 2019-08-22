//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface SPPageMenuItem : UIButton
{
    double _imageRatio;
    long long _imagePosition;
    double _imageTitleSpace;
}

@property(nonatomic) double imageTitleSpace; // @synthesize imageTitleSpace=_imageTitleSpace;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImageRatio:(double)arg1;

@end
