//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MHSpreadAppModel, NSIndexPath, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface MHSpreadAppCell : UICollectionViewCell
{
    id <MHSpreadAppCellDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    MHSpreadAppModel *_appModel;
    UILabel *_title_label;
    UILabel *_subTitle_label;
    UIImageView *_bg_imgView;
    UIButton *_spread_btn;
    NSLayoutConstraint *_labelTopConstraint;
    NSLayoutConstraint *_btnHeightConstraint;
    NSLayoutConstraint *_btnWidthConstraint;
    NSLayoutConstraint *_btnBottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *btnBottomConstraint; // @synthesize btnBottomConstraint=_btnBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *btnWidthConstraint; // @synthesize btnWidthConstraint=_btnWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *btnHeightConstraint; // @synthesize btnHeightConstraint=_btnHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelTopConstraint; // @synthesize labelTopConstraint=_labelTopConstraint;
@property(nonatomic) __weak UIButton *spread_btn; // @synthesize spread_btn=_spread_btn;
@property(nonatomic) __weak UIImageView *bg_imgView; // @synthesize bg_imgView=_bg_imgView;
@property(nonatomic) __weak UILabel *subTitle_label; // @synthesize subTitle_label=_subTitle_label;
@property(nonatomic) __weak UILabel *title_label; // @synthesize title_label=_title_label;
@property(retain, nonatomic) MHSpreadAppModel *appModel; // @synthesize appModel=_appModel;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <MHSpreadAppCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareAppAction:(id)arg1;
- (void)spreatBtnShowAnimated;
- (void)awakeFromNib;

@end
