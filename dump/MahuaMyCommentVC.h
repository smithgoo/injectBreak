//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface MahuaMyCommentVC : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_bottomView;
    UIButton *_allBtn;
    UIButton *_deletBtn;
    NSMutableArray *_dataAryM;
    long long _commentPageIndex;
    UIButton *_rightBtn;
    UIView *_BGView1;
}

@property(retain, nonatomic) UIView *BGView1; // @synthesize BGView1=_BGView1;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) long long commentPageIndex; // @synthesize commentPageIndex=_commentPageIndex;
@property(retain, nonatomic) NSMutableArray *dataAryM; // @synthesize dataAryM=_dataAryM;
@property(retain, nonatomic) UIButton *deletBtn; // @synthesize deletBtn=_deletBtn;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)delecBtnClick;
- (void)selectAllCell;
- (void)selectAllAction:(id)arg1;
- (void)editComment:(id)arg1;
- (void)p_loadMoreData;
- (void)p_loadNewData;
- (void)p_postRequestDeleteCommentWithIdArray:(id)arg1 indexPathAry:(id)arg2;
- (void)p_postRequestMyCommentData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

