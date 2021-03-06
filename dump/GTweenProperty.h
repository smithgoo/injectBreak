//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GTweenProperty : NSObject
{
    SEL _getter;
    SEL _setter;
    CDUnknownFunctionPointerType _setterIMP;
    id _fromValue;
    id _toValue;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
- (void).cxx_destruct;
- (void)reset;
- (void)progress:(float)arg1 target:(id)arg2 imp:(CDUnknownFunctionPointerType)arg3 selector:(SEL)arg4;
- (void)progress:(float)arg1 target:(id)arg2;
- (id)initWithName:(id)arg1 from:(id)arg2 to:(id)arg3;
- (SEL)setterSEL;
- (SEL)getterSEL;

@end

