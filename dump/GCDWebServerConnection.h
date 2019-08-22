//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDWebServer, GCDWebServerHandler, GCDWebServerRequest, GCDWebServerResponse, NSData, NSString;

@interface GCDWebServerConnection : NSObject
{
    int _socket;
    _Bool _virtualHEAD;
    struct __CFHTTPMessage *_requestMessage;
    GCDWebServerRequest *_request;
    GCDWebServerHandler *_handler;
    struct __CFHTTPMessage *_responseMessage;
    GCDWebServerResponse *_response;
    long long _statusCode;
    _Bool _opened;
    unsigned long long _connectionIndex;
    NSString *_requestPath;
    int _requestFD;
    NSString *_responsePath;
    int _responseFD;
    GCDWebServer *_server;
    NSData *_localAddressData;
    NSData *_remoteAddressData;
    unsigned long long _totalBytesRead;
    unsigned long long _totalBytesWritten;
}

+ (void)initialize;
@property(readonly, nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(readonly, nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(readonly, nonatomic) NSData *remoteAddressData; // @synthesize remoteAddressData=_remoteAddressData;
@property(readonly, nonatomic) NSData *localAddressData; // @synthesize localAddressData=_localAddressData;
@property(readonly, nonatomic) GCDWebServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSString *remoteAddressString;
@property(readonly, nonatomic) NSString *localAddressString;
- (id)initWithServer:(id)arg1 localAddress:(id)arg2 remoteAddress:(id)arg3 socket:(int)arg4;
- (void)_readRequestHeaders;
- (void)_readChunkedBodyWithInitialData:(id)arg1;
- (void)_readBodyWithLength:(unsigned long long)arg1 initialData:(id)arg2;
- (void)_finishProcessingRequest:(id)arg1;
- (void)_startProcessingRequest;
- (void)_initializeResponseHeadersWithStatusCode:(long long)arg1;
@property(readonly, nonatomic, getter=isUsingIPv6) _Bool usingIPv6;
- (void)readNextBodyChunk:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)readBodyWithRemainingLength:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)readHeaders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)readData:(id)arg1 withLength:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeBodyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)writeHeadersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)writeData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (void)abortRequest:(id)arg1 withStatusCode:(long long)arg2;
- (id)overrideResponse:(id)arg1 forRequest:(id)arg2;
- (void)processRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preflightRequest:(id)arg1;
- (id)rewriteRequestURL:(id)arg1 withMethod:(id)arg2 headers:(id)arg3;
- (void)didWriteBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)didReadBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)open;

@end

