//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface MahuaDuiHuanMaTableViewCell : UITableViewCell
{
    UIView *_whiteBgv;
    UILabel *_timeLabel;
    UILabel *_codeLabel;
    UIView *_line;
    UILabel *_exchangeLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *exchangeLabel; // @synthesize exchangeLabel=_exchangeLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *whiteBgv; // @synthesize whiteBgv=_whiteBgv;
- (void).cxx_destruct;
- (void)configCellWithModel:(id)arg1;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

