//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaBottomEditView, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface MahuaHistoryViewController : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    MahuaBottomEditView *_bottomEditView;
    UIButton *_editBtn;
    long long _pageindex;
    UIView *_BGView1;
    UIView *_BGView2;
    UIView *_no;
}

@property(retain, nonatomic) UIView *no; // @synthesize no=_no;
@property(retain, nonatomic) UIView *BGView2; // @synthesize BGView2=_BGView2;
@property(retain, nonatomic) UIView *BGView1; // @synthesize BGView1=_BGView1;
@property(nonatomic) long long pageindex; // @synthesize pageindex=_pageindex;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) MahuaBottomEditView *bottomEditView; // @synthesize bottomEditView=_bottomEditView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)postDeleteRequestWithArray:(id)arg1;
- (void)postMoreRequest;
- (void)postRequest;
- (void)deleteIDArray;
- (id)selectedIDArray;
- (void)updateDeleteCount;
- (void)updateSelectedAllState;
- (void)resetEditState:(_Bool)arg1;
- (void)rightBarClick:(id)arg1;
- (void)setupRefresh;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupNav;
- (void)setUpTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

