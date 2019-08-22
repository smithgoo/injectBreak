//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GCallbackTarget : NSObject
{
    _Bool _isBlock;
    id _target;
    SEL _action;
    CDUnknownBlockType _block;
    id _userData;
}

+ (id)targetWithBlock:(CDUnknownBlockType)arg1;
+ (id)target:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) _Bool isBlock; // @synthesize isBlock=_isBlock;
- (void).cxx_destruct;
- (void)invoke;

@end
