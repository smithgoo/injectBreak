//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MahuaVideoModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface MahuaDownLoadCollectionViewCell : UICollectionViewCell
{
    _Bool _showFbl;
    MahuaVideoModel *_videoItem;
    NSString *_titleName;
    long long _type;
    NSMutableArray *_downLoadingArr;
    long long _currentPlaySortId;
    UILabel *_titleLabel;
    UIImageView *_downLoadIcon;
    UIButton *_fblButton;
}

@property(nonatomic) __weak UIButton *fblButton; // @synthesize fblButton=_fblButton;
@property(nonatomic) __weak UIImageView *downLoadIcon; // @synthesize downLoadIcon=_downLoadIcon;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long currentPlaySortId; // @synthesize currentPlaySortId=_currentPlaySortId;
@property(nonatomic) _Bool showFbl; // @synthesize showFbl=_showFbl;
@property(retain, nonatomic) NSMutableArray *downLoadingArr; // @synthesize downLoadingArr=_downLoadingArr;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) MahuaVideoModel *videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
