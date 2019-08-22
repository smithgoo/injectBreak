//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSMutableArray, NSString, UILabel, UITableView, UITextView, UIView;

@interface MahuaQuestionnaireVC : MahuaParentsViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    NSMutableArray *_answerArr;
    UITextView *_textV;
    UILabel *_placeHoldLabel;
    UIView *_pageV1;
    UIView *_pageV2;
}

@property(retain, nonatomic) UIView *pageV2; // @synthesize pageV2=_pageV2;
@property(retain, nonatomic) UIView *pageV1; // @synthesize pageV1=_pageV1;
@property(retain, nonatomic) UILabel *placeHoldLabel; // @synthesize placeHoldLabel=_placeHoldLabel;
@property(retain, nonatomic) UITextView *textV; // @synthesize textV=_textV;
@property(retain, nonatomic) NSMutableArray *answerArr; // @synthesize answerArr=_answerArr;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)firstPageViewClick;
- (void)submitBtnClick;
- (void)tagDidCLick;
- (void)back;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)secondPageWithMoney:(id)arg1;
- (void)firstPage;
- (id)setUpFooterView;
- (id)setUpHeaderView;
- (void)setUpTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

