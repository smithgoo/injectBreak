//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface YCXMenuView : UIView
{
    int _arrowDirection;
    double _arrowPosition;
    UIView *_contentView;
    NSArray *_menuItems;
    CDUnknownBlockType _selectedItem;
}

+ (id)gradientLineWithColor:(id)arg1;
+ (id)selectedImage:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)drawBackground:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)arrowPoint;
- (id)mkContentView;
- (void)performAction:(id)arg1;
- (void)dismissMenu:(_Bool)arg1;
- (void)showMenuInView:(id)arg1 fromRect:(struct CGRect)arg2 menuItems:(id)arg3 selected:(CDUnknownBlockType)arg4;
- (void)setupFrameInView:(id)arg1 fromRect:(struct CGRect)arg2;
- (id)init;

@end

