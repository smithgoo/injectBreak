//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BarrageSpriteQueue, NSArray, NSMutableArray;

@interface BarrageDispatcher : NSObject
{
    NSMutableArray *_activeSprites;
    BarrageSpriteQueue *_waitingSpriteQueue;
    NSMutableArray *_deadSprites;
    double _previousTime;
    double _smoothness;
    _Bool _cacheDeadSprites;
    id <BarrageDispatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <BarrageDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double smoothness; // @synthesize smoothness=_smoothness;
@property(readonly, nonatomic) NSArray *activeSprites; // @synthesize activeSprites=_activeSprites;
@property(nonatomic) _Bool cacheDeadSprites; // @synthesize cacheDeadSprites=_cacheDeadSprites;
- (void).cxx_destruct;
- (void)deactiveSprite:(id)arg1;
- (void)activeSprite:(id)arg1;
- (_Bool)shouldActiveSprite:(id)arg1;
- (void)dispatchSprites;
- (void)deactiveAllSprites;
- (void)addSprite:(id)arg1;
- (double)currentTime;
- (id)init;

@end

