//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaDownLoadView, MahuaMovieIntroModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MahuaDownLoadTelePlayListVC : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIImageView *_sortView;
    UITableView *_tableView;
    UIView *_bottomView;
    UIButton *_allBtn;
    UIButton *_deletBtn;
    NSMutableArray *_array;
    NSMutableArray *_videoPageList;
    NSString *_playId;
    MahuaDownLoadView *_downLoadView;
    MahuaMovieIntroModel *_movieIntroModel;
    UILabel *_countLLL;
}

@property(retain, nonatomic) UILabel *countLLL; // @synthesize countLLL=_countLLL;
@property(retain, nonatomic) MahuaMovieIntroModel *movieIntroModel; // @synthesize movieIntroModel=_movieIntroModel;
@property(retain, nonatomic) MahuaDownLoadView *downLoadView; // @synthesize downLoadView=_downLoadView;
@property(nonatomic) NSString *playId; // @synthesize playId=_playId;
@property(retain, nonatomic) NSMutableArray *videoPageList; // @synthesize videoPageList=_videoPageList;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) UIButton *deletBtn; // @synthesize deletBtn=_deletBtn;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)thumbnailImageForVideo:(id)arg1 atTime:(double)arg2;
- (void)selectAllCell:(id)arg1;
- (void)delecBtnClick;
- (void)deleteCell:(id)arg1;
- (void)setUpBottomBar;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)setUpHeaderView;
- (void)sort:(id)arg1;
- (void)postRequestList;
- (void)moredisk;
- (void)setUpTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

