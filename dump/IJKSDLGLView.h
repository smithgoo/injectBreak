//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IJKSDLGLViewProtocol.h"

@class EAGLContext, NSMutableArray, NSRecursiveLock, NSString;

@interface IJKSDLGLView : UIView <IJKSDLGLViewProtocol>
{
    EAGLContext *_context;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    int _backingWidth;
    int _backingHeight;
    int _frameCount;
    long long _lastFrameTime;
    struct IJK_GLES2_Renderer *_renderer;
    int _rendererGravity;
    _Bool _isRenderBufferInvalidated;
    int _tryLockErrorCount;
    _Bool _didSetupGL;
    _Bool _didStopGL;
    _Bool _didLockedDueToMovedToWindow;
    _Bool _shouldLockWhileBeingMovedToWindow;
    NSMutableArray *_registeredNotifications;
    long long _applicationState;
    _Bool _isThirdGLView;
    _Bool _glActivePaused;
    double _scaleFactor;
    double _fps;
    NSRecursiveLock *_glActiveLock;
}

+ (Class)layerClass;
@property _Bool glActivePaused; // @synthesize glActivePaused=_glActivePaused;
@property(retain) NSRecursiveLock *glActiveLock; // @synthesize glActiveLock=_glActiveLock;
@property(readonly, nonatomic) double fps; // @synthesize fps=_fps;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isThirdGLView; // @synthesize isThirdGLView=_isThirdGLView;
- (void).cxx_destruct;
- (void)setShouldLockWhileBeingMovedToWindow:(_Bool)arg1;
- (id)snapshotInternalOnIOS6AndBefore;
- (id)snapshotInternalOnIOS7AndLater;
- (id)snapshotInternal;
- (id)snapshot;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)toggleGLPaused:(_Bool)arg1;
- (_Bool)tryLockGLActive;
- (void)unlockGLActive;
- (void)lockGLActive;
- (void)displayInternal:(struct SDL_VoutOverlay *)arg1;
- (void)display:(struct SDL_VoutOverlay *)arg1;
- (void)display_pixels:(struct IJKOverlay *)arg1;
- (void)invalidateRenderBuffer;
- (_Bool)setupRenderer:(struct SDL_VoutOverlay *)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)isApplicationActive;
- (_Bool)setupGLOnce;
- (_Bool)setupGL;
- (id)eaglLayer;
- (_Bool)setupEAGLContext:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

