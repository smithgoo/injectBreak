//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MahuaMyCollectionModel, NSLayoutConstraint, UIImageView, UILabel;

@interface MahuaMyCollectionCell : UITableViewCell
{
    UIImageView *_imgView0;
    UILabel *_titleLabel0;
    UIImageView *_imgView1;
    UILabel *_titleLabel1;
    UILabel *_subTitleLabel1;
    UILabel *_updateLabel;
    NSLayoutConstraint *_titleLabelH;
    NSLayoutConstraint *_titleLabelTopConstraint;
    MahuaMyCollectionModel *_model;
}

+ (id)cellWithTableView:(id)arg1 model:(id)arg2;
@property(retain, nonatomic) MahuaMyCollectionModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelH; // @synthesize titleLabelH=_titleLabelH;
@property(nonatomic) __weak UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(nonatomic) __weak UILabel *subTitleLabel1; // @synthesize subTitleLabel1=_subTitleLabel1;
@property(nonatomic) __weak UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(nonatomic) __weak UIImageView *imgView1; // @synthesize imgView1=_imgView1;
@property(nonatomic) __weak UILabel *titleLabel0; // @synthesize titleLabel0=_titleLabel0;
@property(nonatomic) __weak UIImageView *imgView0; // @synthesize imgView0=_imgView0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
