//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class MahuaVIPMaskView, MahuaVoidView, NSArray, NSString, UIScrollView, UIView;

@interface MahuaVIPVideoVC : MahuaParentsViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    MahuaVoidView *_BGMovie1;
    MahuaVoidView *_BGNONet;
    UIScrollView *_scroll;
    NSArray *_btnArray;
    unsigned long long _selectModuleIndex;
    UIView *_indicate;
    NSArray *_moduleData;
    MahuaVIPMaskView *_mask;
    UIScrollView *_control;
}

@property(nonatomic) __weak UIScrollView *control; // @synthesize control=_control;
@property(nonatomic) __weak MahuaVIPMaskView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSArray *moduleData; // @synthesize moduleData=_moduleData;
@property(nonatomic) __weak UIView *indicate; // @synthesize indicate=_indicate;
@property(nonatomic) unsigned long long selectModuleIndex; // @synthesize selectModuleIndex=_selectModuleIndex;
@property(retain, nonatomic) NSArray *btnArray; // @synthesize btnArray=_btnArray;
@property(nonatomic) __weak UIScrollView *scroll; // @synthesize scroll=_scroll;
@property(retain, nonatomic) MahuaVoidView *BGNONet; // @synthesize BGNONet=_BGNONet;
@property(retain, nonatomic) MahuaVoidView *BGMovie1; // @synthesize BGMovie1=_BGMovie1;
- (void).cxx_destruct;
- (void)costExpCard:(id)arg1 columeID:(long long)arg2;
- (void)getCanPlayVideoInfo:(id)arg1 columeID:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)chooseKindofVideo:(id)arg1;
- (void)getMovieInfo:(id)arg1;
- (void)judgeHasExpAuth;
- (void)judgeHasAuth;
- (void)setUpCollectionView:(unsigned long long)arg1;
- (void)setUpControlView:(id)arg1;
- (void)getColumeInfo;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

