//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSArray, NSData;

@interface QQApiExtendObject : QQApiObject
{
    NSData *_data;
    NSData *_previewImageData;
    NSArray *_imageDataArray;
}

+ (id)objectWithData:(id)arg1 previewImageData:(id)arg2 title:(id)arg3 description:(id)arg4 imageDataArray:(id)arg5;
+ (id)objectWithData:(id)arg1 previewImageData:(id)arg2 title:(id)arg3 description:(id)arg4;
@property(retain, nonatomic) NSArray *imageDataArray; // @synthesize imageDataArray=_imageDataArray;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
- (id)initWithData:(id)arg1 previewImageData:(id)arg2 title:(id)arg3 description:(id)arg4 imageDataArray:(id)arg5;
- (id)initWithData:(id)arg1 previewImageData:(id)arg2 title:(id)arg3 description:(id)arg4;

@end

