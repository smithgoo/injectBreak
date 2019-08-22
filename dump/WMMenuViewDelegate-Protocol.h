//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, WMMenuItem, WMMenuView;

@protocol WMMenuViewDelegate <NSObject>

@optional
- (void)menuView:(WMMenuView *)arg1 didLayoutItemFrame:(WMMenuItem *)arg2 atIndex:(long long)arg3;
- (NSString *)menuView:(WMMenuView *)arg1 fontNameForState:(unsigned long long)arg2 atIndex:(long long)arg3;
- (UIColor *)menuView:(WMMenuView *)arg1 titleColorForState:(unsigned long long)arg2 atIndex:(long long)arg3;
- (double)menuView:(WMMenuView *)arg1 titleSizeForState:(unsigned long long)arg2 atIndex:(long long)arg3;
- (double)menuView:(WMMenuView *)arg1 itemMarginAtIndex:(long long)arg2;
- (double)menuView:(WMMenuView *)arg1 widthForItemAtIndex:(long long)arg2;
- (void)menuView:(WMMenuView *)arg1 didSelectedIndex:(long long)arg2 currentIndex:(long long)arg3;
- (_Bool)menuView:(WMMenuView *)arg1 shouldSelesctedIndex:(long long)arg2;
@end

