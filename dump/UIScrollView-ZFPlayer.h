//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSIndexPath;

@interface UIScrollView (ZFPlayer)
+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType zf_shouldPlayIndexPathCallback;
@property(copy, nonatomic) CDUnknownBlockType zf_scrollViewDidStopScrollCallback;
- (void)setZf_lastOffsetY:(double)arg1;
@property(nonatomic) _Bool zf_shouldAutoPlay;
@property(nonatomic, getter=zf_isWWANAutoPlay) _Bool zf_WWANAutoPlay;
@property(nonatomic) _Bool zf_stopWhileNotVisible;
@property(nonatomic) unsigned long long zf_scrollDerection;
@property(nonatomic) long long zf_containerViewTag;
@property(retain, nonatomic) NSIndexPath *zf_shouldPlayIndexPath;
@property(retain, nonatomic) NSIndexPath *zf_playingIndexPath;
@property(nonatomic) _Bool zf_enableScrollHook;
@property(readonly, nonatomic) double zf_lastOffsetY;
- (void)zf_scrollToRowAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)zf_getIndexPathForCell:(id)arg1;
- (id)zf_getCellForIndexPath:(id)arg1;
- (void)zf_filterShouldPlayCellWhileScrolled:(CDUnknownBlockType)arg1;
- (void)zf_filterShouldPlayCellWhileScrolling:(CDUnknownBlockType)arg1;
- (void)scrollViewScrolling;
- (void)scrollViewBeginDragging;
- (void)zf_scrollViewDidStopScroll;
- (void)add_scrollViewWillBeginDragging:(id)arg1;
- (void)add_scrollViewDidScroll:(id)arg1;
- (void)add_scrollViewDidScrollToTop:(id)arg1;
- (void)add_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)add_scrollViewDidEndDecelerating:(id)arg1;
- (void)zf_scrollViewWillBeginDragging:(id)arg1;
- (void)zf_scrollViewDidScroll:(id)arg1;
- (void)zf_scrollViewDidScrollToTop:(id)arg1;
- (void)zf_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)zf_scrollViewDidEndDecelerating:(id)arg1;
- (void)zf_setDelegate:(id)arg1;
@end

