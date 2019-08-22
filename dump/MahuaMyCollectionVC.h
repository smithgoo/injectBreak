//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "SPPageMenuDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, SPPageMenu, UIButton, UIScrollView, UIView;

@interface MahuaMyCollectionVC : MahuaParentsViewController <SPPageMenuDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_dataArray;
    UIView *_BGView2;
    UIButton *_editBtn;
    UIScrollView *_scrollView;
    SPPageMenu *_pageMenu;
    NSMutableArray *_myChildViewControllers;
    NSArray *_titleArr;
}

@property(retain, nonatomic) NSArray *titleArr; // @synthesize titleArr=_titleArr;
@property(retain, nonatomic) NSMutableArray *myChildViewControllers; // @synthesize myChildViewControllers=_myChildViewControllers;
@property(nonatomic) __weak SPPageMenu *pageMenu; // @synthesize pageMenu=_pageMenu;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIView *BGView2; // @synthesize BGView2=_BGView2;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)resetEditState:(_Bool)arg1;
- (void)rightBarClick:(id)arg1;
- (void)postRequest;
- (void)pageMenu:(id)arg1 itemSelectedFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)setupChildVC;
- (void)setupPageMenu;
- (void)setupNav;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
