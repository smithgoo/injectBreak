//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray;

@interface UMNetworkWork : NSOperation
{
    NSMutableArray *_envelopeFilePaths;
}

@property(retain) NSMutableArray *envelopeFilePaths; // @synthesize envelopeFilePaths=_envelopeFilePaths;
- (void).cxx_destruct;
- (_Bool)isAnalyticsBusiness:(id)arg1;
- (id)setupRequest:(id)arg1 withInfo:(id)arg2;
- (_Bool)postDataToServer:(id)arg1 withFile:(id)arg2;
- (_Bool)postDataWithFile:(id)arg1;
- (void)main;

@end
