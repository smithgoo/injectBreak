//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoverViewer, UIImageView;

@protocol CoverViewerDelegate <NSObject>
- (void)passCurrentScrollIndex:(long long)arg1;
- (UIImageView *)coverViewer:(CoverViewer *)arg1 coverAtIndex:(long long)arg2;
- (long long)coverViewerCount:(CoverViewer *)arg1;
@end

