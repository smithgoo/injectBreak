//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIViewController, WMPageController;

@protocol WMPageControllerDelegate <NSObject>

@optional
- (void)pageController:(WMPageController *)arg1 didEnterViewController:(UIViewController *)arg2 withInfo:(NSDictionary *)arg3;
- (void)pageController:(WMPageController *)arg1 willEnterViewController:(UIViewController *)arg2 withInfo:(NSDictionary *)arg3;
- (void)pageController:(WMPageController *)arg1 willCachedViewController:(UIViewController *)arg2 withInfo:(NSDictionary *)arg3;
- (void)pageController:(WMPageController *)arg1 lazyLoadViewController:(UIViewController *)arg2 withInfo:(NSDictionary *)arg3;
@end

