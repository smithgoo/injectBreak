//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlurryFileState;

@protocol IFlurryFileTransferAgent <NSObject>
- (void)resumeTransfer:(id)arg1;
- (void)cancelTransfer:(id)arg1;
- (void)startTransfer:(FlurryFileState *)arg1;
- (void)listTransfers:(void (^)(NSMutableDictionary *))arg1;
@end
