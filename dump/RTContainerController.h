//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UINavigationController;

@interface RTContainerController : UIViewController
{
    UIViewController *_contentViewController;
    UINavigationController *_containerNavigationController;
}

+ (id)containerControllerWithController:(id)arg1 navigationBarClass:(Class)arg2 withPlaceholderController:(_Bool)arg3 backBarButtonItem:(id)arg4 backTitle:(id)arg5;
+ (id)containerControllerWithController:(id)arg1 navigationBarClass:(Class)arg2 withPlaceholderController:(_Bool)arg3;
+ (id)containerControllerWithController:(id)arg1 navigationBarClass:(Class)arg2;
+ (id)containerControllerWithController:(id)arg1;
@property(retain, nonatomic) UINavigationController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (id)tabBarItem;
- (id)title;
- (_Bool)hidesBottomBarWhenPushed;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContentController:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 navigationBarClass:(Class)arg2;
- (id)initWithController:(id)arg1 navigationBarClass:(Class)arg2 withPlaceholderController:(_Bool)arg3;
- (id)initWithController:(id)arg1 navigationBarClass:(Class)arg2 withPlaceholderController:(_Bool)arg3 backBarButtonItem:(id)arg4 backTitle:(id)arg5;

@end

