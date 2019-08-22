//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView, WMMenuItem, WMMenuView;

@protocol WMMenuViewDataSource <NSObject>
- (NSString *)menuView:(WMMenuView *)arg1 titleAtIndex:(long long)arg2;
- (long long)numbersOfTitlesInMenuView:(WMMenuView *)arg1;

@optional
- (WMMenuItem *)menuView:(WMMenuView *)arg1 initialMenuItem:(WMMenuItem *)arg2 atIndex:(long long)arg3;
- (UIView *)menuView:(WMMenuView *)arg1 badgeViewAtIndex:(long long)arg2;
@end
