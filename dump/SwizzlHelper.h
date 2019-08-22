//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SwizzlHelper : NSObject
{
    struct objc_method *_orginalMethod;
    struct objc_method *_swizzledMethod;
    SEL _originalSelector;
    SEL _swizzledSelector;
    CDUnknownFunctionPointerType _originalIMP;
    CDUnknownFunctionPointerType _swizzledIMP;
}

@property(nonatomic) CDUnknownFunctionPointerType swizzledIMP; // @synthesize swizzledIMP=_swizzledIMP;
@property(nonatomic) CDUnknownFunctionPointerType originalIMP; // @synthesize originalIMP=_originalIMP;
@property(nonatomic) SEL swizzledSelector; // @synthesize swizzledSelector=_swizzledSelector;
@property(nonatomic) SEL originalSelector; // @synthesize originalSelector=_originalSelector;
@property(nonatomic) struct objc_method *swizzledMethod; // @synthesize swizzledMethod=_swizzledMethod;
@property(nonatomic) struct objc_method *orginalMethod; // @synthesize orginalMethod=_orginalMethod;
- (id)initWithOriginalClass:(Class)arg1 originalSelector:(SEL)arg2 swizzleClass:(Class)arg3 swizzledMethod:(struct objc_method *)arg4 swizzledSelector:(SEL)arg5 isInstance:(_Bool)arg6;

@end

