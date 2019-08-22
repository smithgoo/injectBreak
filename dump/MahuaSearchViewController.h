//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MahuaSearchView, NSMutableArray, NSString, UITableView, UITextField, UIView;

@interface MahuaSearchViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITextField *_searchBar;
    NSString *_words;
    MahuaSearchView *_searchView;
    NSMutableArray *_historyArray;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    UITableView *_searchWordTableView;
    NSMutableArray *_searchWordArray;
    long long _currentPage;
    long long _type;
    UIView *_BGView1;
}

@property(retain, nonatomic) UIView *BGView1; // @synthesize BGView1=_BGView1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *searchWordArray; // @synthesize searchWordArray=_searchWordArray;
@property(retain, nonatomic) UITableView *searchWordTableView; // @synthesize searchWordTableView=_searchWordTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(retain, nonatomic) MahuaSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) NSString *words; // @synthesize words=_words;
@property(retain, nonatomic) UITextField *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (id)stringContainsEmoji:(id)arg1;
- (void)getMoreRequest;
- (void)postRequest;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupRefresh;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setUpTableView;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isInputRuleNotBlank:(id)arg1;
- (void)searchBarCancel;
- (void)searchWordWithText:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)setHistoryArrWithStr:(id)arg1;
- (void)pushToSearchResultWithSearchStr:(id)arg1;
- (void)setBarButtonItem;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithType:(long long)arg1 words:(id)arg2;
- (void)tapView:(id)arg1;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
