//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MahuaBadgeView, MahuaBottomEditView, NSMutableArray, NSString, UITableView, UIView;

@interface MahuaMyCollectionChildVC : MahuaParentsViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _editBtnEnabled;
    long long _type;
    NSMutableArray *_dataArr;
    CDUnknownBlockType _updateBadgeview;
    CDUnknownBlockType _updateEditBtnEnabled;
    UITableView *_tableView;
    MahuaBottomEditView *_bottomEditView;
    MahuaBadgeView *_badgeView;
    UIView *_BGView1;
}

@property(retain, nonatomic) UIView *BGView1; // @synthesize BGView1=_BGView1;
@property(retain, nonatomic) MahuaBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MahuaBottomEditView *bottomEditView; // @synthesize bottomEditView=_bottomEditView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool editBtnEnabled; // @synthesize editBtnEnabled=_editBtnEnabled;
@property(copy, nonatomic) CDUnknownBlockType updateEditBtnEnabled; // @synthesize updateEditBtnEnabled=_updateEditBtnEnabled;
@property(copy, nonatomic) CDUnknownBlockType updateBadgeview; // @synthesize updateBadgeview=_updateBadgeview;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)sortWithArray:(id)arg1;
- (long long)updateCount;
- (id)selectedIDArray;
- (void)deleteIDArray;
- (void)updateDeleteCount;
- (void)updateSelectedAllState;
- (void)postDeleteRequestWithArray:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

