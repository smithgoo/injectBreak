//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage, ZFPlayerView;

@protocol ZFPlayerMediaPlayback <NSObject>
@property(retain, nonatomic) ZFPlayerView *view;

@optional
@property(copy, nonatomic) CDUnknownBlockType playerDidToEnd;
@property(copy, nonatomic) CDUnknownBlockType playerPlayFailed;
@property(copy, nonatomic) CDUnknownBlockType playerLoadStatChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPlayStatChanged;
@property(copy, nonatomic) CDUnknownBlockType playerBufferTimeChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPlayTimeChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPrepareToPlay;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) unsigned long long playState;
@property(readonly, nonatomic) struct CGSize presentationSize;
@property(retain, nonatomic) NSURL *assetURL;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
@property(nonatomic) long long scalingMode;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) double seekTime;
@property(readonly, nonatomic) double bufferTime;
@property(readonly, nonatomic) double totalTime;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic) float rate;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
- (void)replaceCurrentAssetURL:(NSURL *)arg1;
- (void)seekToTime:(double)arg1 completionHandler:(void (^)(_Bool))arg2;
- (UIImage *)thumbnailImageAtCurrentTime;
- (void)stop;
- (void)replay;
- (void)pause;
- (void)play;
- (void)reloadPlayer;
- (void)prepareToPlay;
@end

