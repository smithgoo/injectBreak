//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class MahuaVideoModel, NSLayoutConstraint, NSString, UILabel, UIView;

@interface MahuaVidoeChooseViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    MahuaVideoModel *_model;
    UIView *_cellView;
    NSLayoutConstraint *_tagWidth;
    UILabel *_tagLab;
    UILabel *_label;
}

@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UILabel *tagLab; // @synthesize tagLab=_tagLab;
@property(nonatomic) __weak NSLayoutConstraint *tagWidth; // @synthesize tagWidth=_tagWidth;
@property(nonatomic) __weak UIView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) MahuaVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setFullScreenModel:(id)arg1 withInfoModel:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

