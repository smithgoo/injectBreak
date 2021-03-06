//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class Address, DeviceDescription, NSString;

@interface Device : NSObject <NSCopying, NSCoding>
{
    _Bool _isSuccessed;
    DeviceDescription *_ddd;
    Address *_address;
    NSString *_location;
    NSString *_maxAge;
    NSString *_server;
    NSString *_bootid_upnp_org;
    NSString *_configid_upnp_org;
    NSString *_usn;
    NSString *_st;
    NSString *_date;
    double _successTime;
}

@property(nonatomic) _Bool isSuccessed; // @synthesize isSuccessed=_isSuccessed;
@property(nonatomic) double successTime; // @synthesize successTime=_successTime;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *st; // @synthesize st=_st;
@property(copy, nonatomic) NSString *usn; // @synthesize usn=_usn;
@property(copy, nonatomic) NSString *configid_upnp_org; // @synthesize configid_upnp_org=_configid_upnp_org;
@property(copy, nonatomic) NSString *bootid_upnp_org; // @synthesize bootid_upnp_org=_bootid_upnp_org;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *maxAge; // @synthesize maxAge=_maxAge;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) Address *address; // @synthesize address=_address;
@property(retain, nonatomic) DeviceDescription *ddd; // @synthesize ddd=_ddd;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isUSNEqual:(id)arg1;
- (_Bool)isIPv4Equal:(id)arg1;
- (id)initWithSsdpResponse:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

