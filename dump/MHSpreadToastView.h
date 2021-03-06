//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface MHSpreadToastView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_imgView;
    UILabel *_title_label;
    UIButton *_join_btn;
    UIButton *_close_btn;
    id <MHSpreadToastViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MHSpreadToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *close_btn; // @synthesize close_btn=_close_btn;
@property(retain, nonatomic) UIButton *join_btn; // @synthesize join_btn=_join_btn;
@property(retain, nonatomic) UILabel *title_label; // @synthesize title_label=_title_label;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closeBtnAction;
- (void)joinBtnAction;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

