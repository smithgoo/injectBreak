//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableURLRequest.h"

@class Device, NSData, NSMutableArray, NSString, Service;

@interface UPnPActionRequest : NSMutableURLRequest
{
    Service *_service;
    Device *_device;
    NSString *_actionName;
    NSString *_requestURL;
    NSData *_requestBody;
    NSMutableArray *_xmlLines;
}

+ (id)request;
@property(retain, nonatomic) NSMutableArray *xmlLines; // @synthesize xmlLines=_xmlLines;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) Device *device; // @synthesize device=_device;
@property(retain, nonatomic) Service *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)composeRequest;
- (id)_soapAction;
- (void)_addXmlSoapWrapper;
- (void)addParameterWithKey:(id)arg1 value:(id)arg2;
- (void)addParameterWithKey:(id)arg1;
- (id)init;
- (id)initWithActionName:(id)arg1;

@end

