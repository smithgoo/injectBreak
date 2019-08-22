//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageOperation.h"

@class NSOperation, NSString, SDWebImageDownloadToken, SDWebImageManager;

@interface SDWebImageCombinedOperation : NSObject <SDWebImageOperation>
{
    _Bool _cancelled;
    SDWebImageDownloadToken *_downloadToken;
    NSOperation *_cacheOperation;
    SDWebImageManager *_manager;
}

@property(nonatomic) __weak SDWebImageManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSOperation *cacheOperation; // @synthesize cacheOperation=_cacheOperation;
@property(retain, nonatomic) SDWebImageDownloadToken *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

