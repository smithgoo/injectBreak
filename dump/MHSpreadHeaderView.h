//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class MHSpreadModel, UIButton, UIImageView, UILabel;

@interface MHSpreadHeaderView : UICollectionReusableView
{
    id <MHSpreadHeaderViewDelegate> _delegate;
    MHSpreadModel *_spreadModel;
    UIImageView *_bg_imgView;
    UILabel *_moneyTitle_label;
    UILabel *_money_label;
    UIImageView *_money_imgView;
    UIButton *_fetchMoney_btn;
    UILabel *_spreadTitle_label;
    UIButton *_checkAll_btn;
}

@property(retain, nonatomic) UIButton *checkAll_btn; // @synthesize checkAll_btn=_checkAll_btn;
@property(retain, nonatomic) UILabel *spreadTitle_label; // @synthesize spreadTitle_label=_spreadTitle_label;
@property(retain, nonatomic) UIButton *fetchMoney_btn; // @synthesize fetchMoney_btn=_fetchMoney_btn;
@property(retain, nonatomic) UIImageView *money_imgView; // @synthesize money_imgView=_money_imgView;
@property(retain, nonatomic) UILabel *money_label; // @synthesize money_label=_money_label;
@property(retain, nonatomic) UILabel *moneyTitle_label; // @synthesize moneyTitle_label=_moneyTitle_label;
@property(retain, nonatomic) UIImageView *bg_imgView; // @synthesize bg_imgView=_bg_imgView;
@property(retain, nonatomic) MHSpreadModel *spreadModel; // @synthesize spreadModel=_spreadModel;
@property(nonatomic) __weak id <MHSpreadHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkAllAction;
- (void)showAnimalAction;
- (void)fetchBtnAction;
- (void)_initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
