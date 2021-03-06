//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MHResourceSetDelegate.h"
#import "ZFPlayerMediaPlayback.h"

@class IJKFFMoviePlayerController, IJKFFOptions, NSString, NSTimer, NSURL, ZFPlayerView;

@interface ZFIJKPlayerManager : NSObject <MHResourceSetDelegate, ZFPlayerMediaPlayback>
{
    _Bool _muted;
    _Bool _isPlaying;
    _Bool _isPreparedToPlay;
    _Bool _isSeekTime;
    _Bool _isDownload;
    _Bool _timeChange;
    _Bool _isLoadingNow;
    float _volume;
    float _rate;
    ZFPlayerView *_view;
    double _currentTime;
    double _totalTime;
    CDUnknownBlockType _playerPlayTimeChanged;
    CDUnknownBlockType _playerBufferTimeChanged;
    CDUnknownBlockType _playerDidToEnd;
    double _bufferTime;
    unsigned long long _playState;
    unsigned long long _loadState;
    NSURL *_assetURL;
    CDUnknownBlockType _playerPrepareToPlay;
    CDUnknownBlockType _playerPlayStatChanged;
    CDUnknownBlockType _playerLoadStatChanged;
    double _seekTime;
    long long _scalingMode;
    CDUnknownBlockType _playerPlayFailed;
    IJKFFMoviePlayerController *_player;
    IJKFFOptions *_options;
    double _lastVolume;
    NSTimer *_timer;
    double _selfTime;
    struct CGSize _presentationSize;
}

@property(nonatomic) _Bool isLoadingNow; // @synthesize isLoadingNow=_isLoadingNow;
@property(nonatomic) _Bool timeChange; // @synthesize timeChange=_timeChange;
@property(nonatomic) double selfTime; // @synthesize selfTime=_selfTime;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double lastVolume; // @synthesize lastVolume=_lastVolume;
@property(retain, nonatomic) IJKFFOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
@property(nonatomic) _Bool isSeekTime; // @synthesize isSeekTime=_isSeekTime;
@property(retain, nonatomic) IJKFFMoviePlayerController *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType playerPlayFailed; // @synthesize playerPlayFailed=_playerPlayFailed;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(readonly, nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) CDUnknownBlockType playerLoadStatChanged; // @synthesize playerLoadStatChanged=_playerLoadStatChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPlayStatChanged; // @synthesize playerPlayStatChanged=_playerPlayStatChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPrepareToPlay; // @synthesize playerPrepareToPlay=_playerPrepareToPlay;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) unsigned long long playState; // @synthesize playState=_playState;
@property(readonly, nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(copy, nonatomic) CDUnknownBlockType playerDidToEnd; // @synthesize playerDidToEnd=_playerDidToEnd;
@property(copy, nonatomic) CDUnknownBlockType playerBufferTimeChanged; // @synthesize playerBufferTimeChanged=_playerBufferTimeChanged;
@property(copy, nonatomic) CDUnknownBlockType playerPlayTimeChanged; // @synthesize playerPlayTimeChanged=_playerPlayTimeChanged;
@property(readonly, nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) ZFPlayerView *view; // @synthesize view=_view;
- (void).cxx_destruct;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void)setLoadState:(unsigned long long)arg1;
- (void)setPlayState:(unsigned long long)arg1;
- (void)moviePlayBackStateDidChange:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)loadStateDid:(id)arg1;
- (void)mediaIsPreparedToPlayDidChange:(id)arg1;
- (void)moviePlayBackFinish:(id)arg1;
- (void)update;
- (void)moviePlayFailed;
- (void)removeMovieNotificationObservers;
- (void)addPlayerNotificationObservers;
- (void)initializePlayer;
- (id)thumbnailImageAtCurrentTime;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceCurrentAssetURL:(id)arg1;
- (void)replay;
- (void)stop;
- (void)pause;
- (void)play;
- (void)reloadPlayer;
- (void)prepareToPlay;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

