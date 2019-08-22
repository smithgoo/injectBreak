//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, ZFPlayerCustomBtn;

@interface MahuaVideoSpeedView : UIView
{
    _Bool _makeViews;
    CDUnknownBlockType _chooseVideoClick;
    CDUnknownBlockType _closeAction;
    ZFPlayerCustomBtn *_selBtn;
    NSString *_speedStr;
    NSMutableArray *_btnArr;
}

@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) NSString *speedStr; // @synthesize speedStr=_speedStr;
@property(nonatomic) _Bool makeViews; // @synthesize makeViews=_makeViews;
@property(retain, nonatomic) ZFPlayerCustomBtn *selBtn; // @synthesize selBtn=_selBtn;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType chooseVideoClick; // @synthesize chooseVideoClick=_chooseVideoClick;
- (void).cxx_destruct;
- (void)hide;
- (void)hiddenTapGesture:(id)arg1;
- (void)updateBtn:(id)arg1;
- (void)showWithSpeed:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)makeView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
