//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "MahuaSeeMoviewRankTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaVoidView, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface MahuaSeeMovieRankViewController : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource, MahuaSeeMoviewRankTableViewCellDelegate>
{
    _Bool _showLoadingView;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    UIButton *_selectedBtn;
    UIButton *_selectedDayBtn;
    UIView *_whiteBgv;
    NSString *_movieType;
    NSString *_dayType;
    MahuaVoidView *_noDataVoidView;
    MahuaVoidView *_noNetVoidView;
}

@property(nonatomic) _Bool showLoadingView; // @synthesize showLoadingView=_showLoadingView;
@property(retain, nonatomic) MahuaVoidView *noNetVoidView; // @synthesize noNetVoidView=_noNetVoidView;
@property(retain, nonatomic) MahuaVoidView *noDataVoidView; // @synthesize noDataVoidView=_noDataVoidView;
@property(copy, nonatomic) NSString *dayType; // @synthesize dayType=_dayType;
@property(copy, nonatomic) NSString *movieType; // @synthesize movieType=_movieType;
@property(retain, nonatomic) UIView *whiteBgv; // @synthesize whiteBgv=_whiteBgv;
@property(retain, nonatomic) UIButton *selectedDayBtn; // @synthesize selectedDayBtn=_selectedDayBtn;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)changeDay:(id)arg1;
- (void)changeItem:(id)arg1;
- (void)seeMovieWithIndexRow:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setUpView;
- (void)getDataWithMovieType:(id)arg1 DayType:(id)arg2;
- (void)getRankCache;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

