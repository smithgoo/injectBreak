//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FeedBackMsgModel, UILabel;

@interface FeedBackMegCell : UITableViewCell
{
    UILabel *_typeL;
    UILabel *_titileL;
    UILabel *_feedMsgL;
    UILabel *_feedMsgTimeL;
    UILabel *_answerL;
    UILabel *_answerTimeL;
    FeedBackMsgModel *_model;
}

@property(retain, nonatomic) FeedBackMsgModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *answerTimeL; // @synthesize answerTimeL=_answerTimeL;
@property(nonatomic) __weak UILabel *answerL; // @synthesize answerL=_answerL;
@property(nonatomic) __weak UILabel *feedMsgTimeL; // @synthesize feedMsgTimeL=_feedMsgTimeL;
@property(nonatomic) __weak UILabel *feedMsgL; // @synthesize feedMsgL=_feedMsgL;
@property(nonatomic) __weak UILabel *titileL; // @synthesize titileL=_titileL;
@property(nonatomic) __weak UILabel *typeL; // @synthesize typeL=_typeL;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

