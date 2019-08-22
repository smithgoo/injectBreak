//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface SWQRCodeConfig : NSObject
{
    long long _scannerType;
    long long _scannerArea;
    UIColor *_scannerCornerColor;
    UIColor *_scannerBorderColor;
    long long _indicatorViewStyle;
}

@property(nonatomic) long long indicatorViewStyle; // @synthesize indicatorViewStyle=_indicatorViewStyle;
@property(retain, nonatomic) UIColor *scannerBorderColor; // @synthesize scannerBorderColor=_scannerBorderColor;
@property(retain, nonatomic) UIColor *scannerCornerColor; // @synthesize scannerCornerColor=_scannerCornerColor;
@property(nonatomic) long long scannerArea; // @synthesize scannerArea=_scannerArea;
@property(nonatomic) long long scannerType; // @synthesize scannerType=_scannerType;
- (void).cxx_destruct;
- (id)init;

@end
