//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"
#import "NSURLSessionDataDelegate.h"

@class ASIDataDecompressor, ASIHTTPRequest, IJKHLSSegment, MHAESCrypto, MHNewCrypto, MHResourceSet, NSString, NSURLSession;

@interface MHResourceItem : NSObject <ASIHTTPRequestDelegate, NSURLSessionDataDelegate>
{
    NSString *_path;
    ASIHTTPRequest *_request;
    struct vector<char, std::__1::allocator<char>> _buffer;
    double _startTime;
    ASIDataDecompressor *_decompressor;
    MHAESCrypto *_crypto;
    MHNewCrypto *_newCrypto;
    NSURLSession *_session;
    long long _tryNum;
    unsigned long long _contentLength;
    struct mutex _mutex;
    struct list<void (^)(NSError *), std::__1::allocator<void (^)(NSError *)>> _onCompletes;
    struct mutex _onCompleteMutex;
    unsigned long long _status;
    IJKHLSSegment *_segment;
    unsigned long long _diskSize;
    MHResourceSet *_resource;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak MHResourceSet *resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) unsigned long long diskSize; // @synthesize diskSize=_diskSize;
@property(readonly, nonatomic) IJKHLSSegment *segment; // @synthesize segment=_segment;
@property unsigned long long status; // @synthesize status=_status;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float progress;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearMemory;
- (void)clearCache;
- (void)failed:(id)arg1;
- (void)complete;
- (void)reset;
- (void)stopWithComplete:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)_start;
- (void)startWithComplete:(CDUnknownBlockType)arg1;
- (void)start;
- (void)dealloc;
- (id)readAllData;
- (void)refreshReadFailed;
- (int)readData:(char *)arg1 size:(int)arg2 offset:(unsigned long long)arg3;
- (int)checkDecrypt:(char *)arg1 size:(int)arg2 offset:(unsigned long long)arg3;
- (void)checkStatus;
- (id)initWithResource:(id)arg1 segment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
