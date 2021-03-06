//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage;

@interface RHScanViewStyle : NSObject
{
    _Bool _isNeedShowRetangle;
    double _whRatio;
    double _centerUpOffset;
    double _xScanRetangleOffset;
    UIColor *_colorRetangleLine;
    long long _photoframeAngleStyle;
    UIColor *_colorAngle;
    double _photoframeAngleW;
    double _photoframeAngleH;
    double _photoframeLineW;
    long long _anmiationStyle;
    UIImage *_animationImage;
    UIColor *_notRecoginitonArea;
}

@property(retain, nonatomic) UIColor *notRecoginitonArea; // @synthesize notRecoginitonArea=_notRecoginitonArea;
@property(retain, nonatomic) UIImage *animationImage; // @synthesize animationImage=_animationImage;
@property(nonatomic) long long anmiationStyle; // @synthesize anmiationStyle=_anmiationStyle;
@property(nonatomic) double photoframeLineW; // @synthesize photoframeLineW=_photoframeLineW;
@property(nonatomic) double photoframeAngleH; // @synthesize photoframeAngleH=_photoframeAngleH;
@property(nonatomic) double photoframeAngleW; // @synthesize photoframeAngleW=_photoframeAngleW;
@property(retain, nonatomic) UIColor *colorAngle; // @synthesize colorAngle=_colorAngle;
@property(nonatomic) long long photoframeAngleStyle; // @synthesize photoframeAngleStyle=_photoframeAngleStyle;
@property(retain, nonatomic) UIColor *colorRetangleLine; // @synthesize colorRetangleLine=_colorRetangleLine;
@property(nonatomic) double xScanRetangleOffset; // @synthesize xScanRetangleOffset=_xScanRetangleOffset;
@property(nonatomic) double centerUpOffset; // @synthesize centerUpOffset=_centerUpOffset;
@property(nonatomic) double whRatio; // @synthesize whRatio=_whRatio;
@property(nonatomic) _Bool isNeedShowRetangle; // @synthesize isNeedShowRetangle=_isNeedShowRetangle;
- (void).cxx_destruct;
- (id)init;

@end

