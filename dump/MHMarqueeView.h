//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UUMarqueeViewDelegate.h"

@class NSArray, NSString, UIButton, UUMarqueeView;

@interface MHMarqueeView : UIView <UUMarqueeViewDelegate>
{
    long long _type;
    NSArray *_dataArr;
    CDUnknownBlockType _scrollAll;
    UUMarqueeView *_upwardSingleMarqueeView;
    UIButton *_tipBtn;
}

@property(retain, nonatomic) UIButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(retain, nonatomic) UUMarqueeView *upwardSingleMarqueeView; // @synthesize upwardSingleMarqueeView=_upwardSingleMarqueeView;
@property(copy, nonatomic) CDUnknownBlockType scrollAll; // @synthesize scrollAll=_scrollAll;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)changeTime:(long long)arg1;
- (void)dealloc;
- (void)itemViewEndAtIndex:(unsigned long long)arg1 isScrollEnd:(_Bool)arg2 forMarqueeView:(id)arg3;
- (void)updateItemView:(id)arg1 atIndex:(unsigned long long)arg2 forMarqueeView:(id)arg3;
- (void)createItemView:(id)arg1 forMarqueeView:(id)arg2;
- (unsigned long long)numberOfDataForMarqueeView:(id)arg1;
- (unsigned long long)numberOfVisibleItemsForMarqueeView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
