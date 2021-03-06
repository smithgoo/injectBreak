//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, UIColor, UIFont;

@interface ZTLetterIndex : UIView
{
    long long _lastIndex;
    CALayer *_slidr;
    NSArray *_dataArray;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIColor *_sliderColor;
    double _sliderSpace;
    id <ZTLetterIndexDelegate> _delegate;
    struct CGSize _itemSize;
    struct CGSize _sliderSize;
}

@property(nonatomic) id <ZTLetterIndexDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double sliderSpace; // @synthesize sliderSpace=_sliderSpace;
@property(retain, nonatomic) UIColor *sliderColor; // @synthesize sliderColor=_sliderColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) struct CGSize sliderSize; // @synthesize sliderSize=_sliderSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)selectIndex:(long long)arg1;
- (void)touchLong:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)setupItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

