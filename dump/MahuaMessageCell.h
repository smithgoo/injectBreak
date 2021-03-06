//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MahuaMessageModel, UILabel;

@interface MahuaMessageCell : UITableViewCell
{
    MahuaMessageModel *_model;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_introLabel;
    UILabel *_togoLabel;
    UILabel *_htmlLabel;
}

+ (id)createCellWithTableView:(id)arg1;
@property(nonatomic) __weak UILabel *htmlLabel; // @synthesize htmlLabel=_htmlLabel;
@property(nonatomic) __weak UILabel *togoLabel; // @synthesize togoLabel=_togoLabel;
@property(nonatomic) __weak UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MahuaMessageModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

