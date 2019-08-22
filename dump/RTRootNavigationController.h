//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSString, UIViewController;

@interface RTRootNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _useSystemBackBarButtonItem;
    _Bool _transferNavigationBarAttributes;
    id <UINavigationControllerDelegate> _rt_delegate;
    CDUnknownBlockType _animationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) __weak id <UINavigationControllerDelegate> rt_delegate; // @synthesize rt_delegate=_rt_delegate;
@property(nonatomic) _Bool transferNavigationBarAttributes; // @synthesize transferNavigationBarAttributes=_transferNavigationBarAttributes;
@property(nonatomic) _Bool useSystemBackBarButtonItem; // @synthesize useSystemBackBarButtonItem=_useSystemBackBarButtonItem;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)popToRootViewControllerAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)popViewControllerAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)removeViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *rt_viewControllers;
@property(readonly, nonatomic) UIViewController *rt_visibleViewController;
@property(readonly, nonatomic) UIViewController *rt_topViewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)viewDidLoad;
- (id)initWithRootViewControllerNoWrapping:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (void)_commonInit;
- (void)onBack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

