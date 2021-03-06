//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "MissonCenterCellDelegate.h"
#import "MissonHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaVoidView, MissonHeaderView, NSMutableArray, NSString, UITableView, UIView;

@interface MissonCenterViewController : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource, MissonHeaderViewDelegate, MissonCenterCellDelegate>
{
    _Bool _needRefresh;
    _Bool _fromOtherViewController;
    _Bool _isGameCenter;
    _Bool _isSelfShowing;
    MahuaVoidView *_noWeb;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    MissonHeaderView *_headView;
    UIView *_clickTextView;
    long long _personCount;
    long long _dayCount;
    long long _myMoney;
}

@property(nonatomic) _Bool isSelfShowing; // @synthesize isSelfShowing=_isSelfShowing;
@property(nonatomic) long long myMoney; // @synthesize myMoney=_myMoney;
@property(nonatomic) long long dayCount; // @synthesize dayCount=_dayCount;
@property(nonatomic) long long personCount; // @synthesize personCount=_personCount;
@property(retain, nonatomic) UIView *clickTextView; // @synthesize clickTextView=_clickTextView;
@property(nonatomic) __weak MissonHeaderView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) MahuaVoidView *noWeb; // @synthesize noWeb=_noWeb;
@property(nonatomic) _Bool isGameCenter; // @synthesize isGameCenter=_isGameCenter;
@property(nonatomic) _Bool fromOtherViewController; // @synthesize fromOtherViewController=_fromOtherViewController;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
- (void).cxx_destruct;
- (void)junmpToIntroVC;
- (void)AFNReachability:(id)arg1;
- (void)qiandaoRequest;
- (void)didReceiveMemoryWarning;
- (void)doMissionWithIndexPathRow:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setUpTableView;
- (void)bottomButtonTag:(long long)arg1;
- (void)passButtonTitle:(id)arg1;
- (void)setUpHeader;
- (void)getMyMoney;
- (void)chaXun;
- (void)getData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)goExchangeCenter;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

