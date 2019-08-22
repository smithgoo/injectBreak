//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface Address : NSObject <NSCopying, NSCoding>
{
    NSString *_ipv4;
    NSString *_ipv6;
    NSString *_port;
}

@property(copy, nonatomic) NSString *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *ipv6; // @synthesize ipv6=_ipv6;
@property(copy, nonatomic) NSString *ipv4; // @synthesize ipv4=_ipv4;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
