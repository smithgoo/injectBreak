//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSArray, NSData;

@interface QQApiCommonContentObject : QQApiObject
{
    unsigned int _layoutType;
    NSData *_previewImageData;
    NSArray *_textArray;
    NSArray *_pictureDataArray;
}

+ (id)objectWithDictionary:(id)arg1;
+ (id)objectWithLayoutType:(int)arg1 textArray:(id)arg2 pictureArray:(id)arg3 previewImageData:(id)arg4;
@property(retain, nonatomic) NSArray *pictureDataArray; // @synthesize pictureDataArray=_pictureDataArray;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
@property(nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(nonatomic) unsigned int layoutType; // @synthesize layoutType=_layoutType;
- (id)toDictionary;
- (void)dealloc;

@end

