//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MahuaMyPromotionModel, UILabel;

@interface MahuaMypromotionCell : UITableViewCell
{
    MahuaMyPromotionModel *_model;
    UILabel *_userIdLabel;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
}

+ (id)createCellWithTableView:(id)arg1;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UILabel *userIdLabel; // @synthesize userIdLabel=_userIdLabel;
@property(retain, nonatomic) MahuaMyPromotionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

