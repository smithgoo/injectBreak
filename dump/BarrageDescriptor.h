//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface BarrageDescriptor : NSObject <NSCopying>
{
    NSString *_xml;
    NSString *_spriteName;
    NSMutableDictionary *_params;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *spriteName; // @synthesize spriteName=_spriteName;
- (void).cxx_destruct;
- (void)clickAction:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithString:(id)arg1;

@end

