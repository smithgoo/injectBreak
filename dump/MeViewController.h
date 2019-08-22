//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "SDCycleScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaUserDetailModel, NSLock, NSMutableArray, NSNumber, NSString, SDCycleScrollView, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MeViewController : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource, SDCycleScrollViewDelegate>
{
    _Bool _popFromCollectionVC;
    UITableView *_tableView;
    UIView *_topView;
    UILabel *_nameLabel;
    NSNumber *_myMoney;
    UILabel *_memberLabel;
    UILabel *_levelLabel;
    UIImageView *_iconV;
    UIButton *_msgBtn;
    UIButton *_loginBtn;
    UIButton *_registerBtn;
    UILabel *_scorLabel;
    NSMutableArray *_allDataArray;
    MahuaUserDetailModel *_userModel;
    NSMutableArray *_historyList;
    NSMutableArray *_downladedArray;
    NSLock *_lock;
    UIView *_clickTextView;
    NSMutableArray *_thirdBootadsList;
    SDCycleScrollView *_ADCycleScrollView;
}

@property(retain, nonatomic) SDCycleScrollView *ADCycleScrollView; // @synthesize ADCycleScrollView=_ADCycleScrollView;
@property(retain, nonatomic) NSMutableArray *thirdBootadsList; // @synthesize thirdBootadsList=_thirdBootadsList;
@property(retain, nonatomic) UIView *clickTextView; // @synthesize clickTextView=_clickTextView;
@property(nonatomic) _Bool popFromCollectionVC; // @synthesize popFromCollectionVC=_popFromCollectionVC;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *downladedArray; // @synthesize downladedArray=_downladedArray;
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) MahuaUserDetailModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) NSMutableArray *allDataArray; // @synthesize allDataArray=_allDataArray;
@property(retain, nonatomic) UILabel *scorLabel; // @synthesize scorLabel=_scorLabel;
@property(retain, nonatomic) UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIButton *msgBtn; // @synthesize msgBtn=_msgBtn;
@property(retain, nonatomic) UIImageView *iconV; // @synthesize iconV=_iconV;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) NSNumber *myMoney; // @synthesize myMoney=_myMoney;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)joinPartnerAction;
- (void)postPlayerAdvertisingView:(id)arg1;
- (void)clickADWithModel:(id)arg1;
- (void)junmpToIntroVC;
- (void)AFNReachability:(id)arg1;
- (id)spreadView:(_Bool)arg1;
- (void)disAirPlay;
- (void)loginOutBtn;
- (void)levelLabelClick;
- (void)spreadBtnAction;
- (void)saomaVC;
- (void)msgVC;
- (void)personBtnClick:(id)arg1;
- (void)routerToExchangeCenter;
- (void)getADDate;
- (void)getVIPAuthData;
- (void)postRequestQueryDetailAndLog;
- (void)getHistoryList;
- (void)settingBtnClick;
- (void)loginBtnClick:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setUpTableView;
- (id)setUpFootView;
- (id)setUpHeaderView;
- (void)didReceiveMemoryWarning;
- (_Bool)isUpdateSystemMessage;
- (void)updateMessageBadge;
- (void)updateTabBarBadge;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setUpNav;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
