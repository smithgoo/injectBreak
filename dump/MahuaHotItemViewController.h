//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "MahuaHotItemTableViewCellDelegate.h"
#import "QQShareDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WXDelegate.h"
#import "WeiBoDelegate.h"

@class AppDelegate, MahuaShareView, MahuaVoidView, NSMutableArray, NSString, UITableView;

@interface MahuaHotItemViewController : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource, MahuaHotItemTableViewCellDelegate, WeiBoDelegate, WXDelegate, QQShareDelegate>
{
    AppDelegate *appdelegate;
    _Bool _isRefresh;
    _Bool _loadMore;
    int _currentPage;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    MahuaVoidView *_noNetVoidView;
    MahuaVoidView *_noDataVoidView;
    MahuaShareView *_shareView;
}

@property(retain, nonatomic) MahuaShareView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) _Bool loadMore; // @synthesize loadMore=_loadMore;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) MahuaVoidView *noDataVoidView; // @synthesize noDataVoidView=_noDataVoidView;
@property(retain, nonatomic) MahuaVoidView *noNetVoidView; // @synthesize noNetVoidView=_noNetVoidView;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)shareFaile;
- (void)shareSucess;
- (void)shareFailByWeiboCode;
- (void)shareFailByQQCode;
- (void)shareFailByCode;
- (void)weiboShareSuccessCode:(long long)arg1;
- (void)shareSuccessByCode:(int)arg1;
- (void)shareSuccssWithQQCode:(long long)arg1;
- (void)shareWithRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getMoreDataRequest;
- (void)refreshDataRequest;
- (void)setUpRefresh;
- (void)setUpTableView;
- (void)getData;
- (void)getCacheData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

