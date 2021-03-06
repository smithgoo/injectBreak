//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FlurryActorStreamComponent.h"

#import "IFlurryStreamComponentFrameLogWriter.h"

@class NSFileHandle, NSString;

@interface FlurryStreamComponentFrameLogWriter : FlurryActorStreamComponent <IFlurryStreamComponentFrameLogWriter>
{
    NSString *_versionID;
    NSString *_filePath;
    NSFileHandle *_fileHandle;
    id <IFlurryStreamMessageSerializer> _serializer;
    id <IFlurryStreamMessageDeserializer> _deserializer;
}

+ (id)fileWriterWithFilePath:(id)arg1 serializer:(id)arg2 deserializer:(id)arg3 versionID:(id)arg4;
@property(retain, nonatomic) id <IFlurryStreamMessageDeserializer> deserializer; // @synthesize deserializer=_deserializer;
@property(retain, nonatomic) id <IFlurryStreamMessageSerializer> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *versionID; // @synthesize versionID=_versionID;
- (void).cxx_destruct;
- (void)onqueue_sendStreamMessage:(id)arg1;
- (void)registerNextStageComponent:(id)arg1;
- (void)onqueue_openFrameLogAndSeekToEndOfFile;
- (void)onqueue_writeVersionFrame;
- (void)onqueue_rollLogFile;
- (void)onqueue_writeData:(id)arg1;
- (void)onqueue_startNewLogFile;
- (void)startNewLogFile;
- (id)initWithFilePath:(id)arg1 serializer:(id)arg2 deserializer:(id)arg3 versionID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

