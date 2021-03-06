//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLUPnPServerDelegate.h"

@class CLUPnPServer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MHDLNAScaner : NSObject <CLUPnPServerDelegate>
{
    NSMutableDictionary *_renderersIndex;
    CLUPnPServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    id <MHDLNAScanerDelegate> _delegate;
    NSMutableArray *_renderers;
}

@property(retain, nonatomic) NSMutableArray *renderers; // @synthesize renderers=_renderers;
@property(nonatomic) __weak id <MHDLNAScanerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)research;
- (void)stop;
- (void)scan;
- (void)start;
- (void)upnpSearchChangeWithResults:(id)arg1;
- (id)init;
- (id)rendererAt:(long long)arg1;
- (long long)rendererCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

