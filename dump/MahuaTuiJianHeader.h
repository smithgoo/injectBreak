//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSMutableArray, ZPCarouselView;

@interface MahuaTuiJianHeader : UICollectionReusableView
{
    ZPCarouselView *_cycleScrollView;
    id <MahuaTuiJianHeaderDelegate> _delegate;
    NSMutableArray *_bannerArray;
}

@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(nonatomic) __weak id <MahuaTuiJianHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ZPCarouselView *cycleScrollView; // @synthesize cycleScrollView=_cycleScrollView;
- (void).cxx_destruct;
- (void)refeshUIWithModelArr:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
