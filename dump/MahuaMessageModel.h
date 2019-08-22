//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MahuaCommentModel, NSString;

@interface MahuaMessageModel : NSObject
{
    NSString *_targetJson;
    NSString *_title;
    NSString *_content;
    NSString *_sendTimeStr;
    NSString *_sendUserName;
    long long _messageType;
    long long _cellHight;
    MahuaCommentModel *_commentModel;
    double _commentHeight;
    double _commentCellHeight;
}

@property(nonatomic) double commentCellHeight; // @synthesize commentCellHeight=_commentCellHeight;
@property(nonatomic) double commentHeight; // @synthesize commentHeight=_commentHeight;
@property(retain, nonatomic) MahuaCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) long long cellHight; // @synthesize cellHight=_cellHight;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *sendUserName; // @synthesize sendUserName=_sendUserName;
@property(retain, nonatomic) NSString *sendTimeStr; // @synthesize sendTimeStr=_sendTimeStr;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *targetJson; // @synthesize targetJson=_targetJson;
- (void).cxx_destruct;

@end

