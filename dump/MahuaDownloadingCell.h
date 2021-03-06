//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MahuaM3U8DownloadManager, NSString, UIImageView, UILabel, UIProgressView, ZFNetworkSpeedMonitor;

@interface MahuaDownloadingCell : UITableViewCell
{
    NSString *downLoadSpeed;
    UIImageView *_imageV;
    UILabel *_fileNameLabel;
    UIProgressView *_progress;
    UILabel *_progressLabel;
    UILabel *_speedLabel;
    ZFNetworkSpeedMonitor *_speedMonitor;
    MahuaM3U8DownloadManager *_fileInfo;
}

+ (id)createCellWithTableView:(id)arg1;
@property(retain, nonatomic) MahuaM3U8DownloadManager *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) ZFNetworkSpeedMonitor *speedMonitor; // @synthesize speedMonitor=_speedMonitor;
@property(nonatomic) __weak UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(nonatomic) __weak UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) __weak UIProgressView *progress; // @synthesize progress=_progress;
@property(nonatomic) __weak UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)networkSpeedChanged:(id)arg1;

@end

