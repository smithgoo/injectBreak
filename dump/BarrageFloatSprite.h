//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BarrageSprite.h"

@interface BarrageFloatSprite : BarrageSprite
{
    double _leftActiveTime;
    _Bool _avoidCollision;
    double _duration;
    unsigned long long _direction;
    unsigned long long _side;
    unsigned long long _trackNumber;
    double _fadeInTime;
    double _fadeOutTime;
}

@property(nonatomic) _Bool avoidCollision; // @synthesize avoidCollision=_avoidCollision;
@property(nonatomic) double fadeOutTime; // @synthesize fadeOutTime=_fadeOutTime;
@property(nonatomic) double fadeInTime; // @synthesize fadeInTime=_fadeInTime;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) unsigned long long side; // @synthesize side=_side;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (struct CGPoint)originInBounds:(struct CGRect)arg1 withSprites:(id)arg2;
- (_Bool)validWithTime:(double)arg1;
- (double)estimateActiveTime;
- (void)updateWithTime:(double)arg1;
- (id)init;

@end

