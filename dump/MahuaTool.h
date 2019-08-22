//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MahuaTool : NSObject
{
}

+ (id)getlanchImage;
+ (id)createDelayBarrageDescriptorWithTitle:(id)arg1 time:(double)arg2 ID:(long long)arg3 withPlayerRate:(double)arg4;
+ (id)createBarrageDescriptorWithTitle:(id)arg1 withPlayerRate:(double)arg2;
+ (id)convertTimeSecond:(long long)arg1;
+ (id)getChannelinfo;
+ (id)downloadHeaderString;
+ (id)imageByCroppingWithImage:(id)arg1;
+ (long long)getResultNumWithSHeight:(_Bool)arg1;
+ (id)headerString;
+ (void)goToAppSystemSetting;
+ (_Bool)isUserNotificationEnable;
+ (_Bool)emojiInUnicode:(short)arg1;
+ (_Bool)emojiInSoftBankUnicode:(short)arg1;
+ (_Bool)stringContainsEmoji:(id)arg1;
+ (id)getVideoLevelTitle:(id)arg1;
+ (id)getPlayModel:(id)arg1 withType:(id)arg2;
+ (id)getPlayModel:(id)arg1 withSelVideoLevel:(id)arg2;
+ (void)dealWithModel:(id)arg1 withType:(id)arg2;
+ (void)dealWithDefault:(id)arg1 withSelVideoLevel:(id)arg2;
+ (_Bool)includeChinese:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)randomBarrageWithArray:(id)arg1 andNum:(long long)arg2;
+ (struct CGSize)textSize:(id)arg1 font:(id)arg2 maxSize:(struct CGSize)arg3;
+ (id)return10LetterAndNumber;
+ (id)return16LetterAndNumber;
+ (id)getAccessToken;
+ (id)getKey;
+ (id)changeNumberFromInteger:(long long)arg1;
+ (void)removeDirectoryPath:(id)arg1;
+ (void)getFileSize:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dc_callFeedback;
+ (int)compareOneDay:(id)arg1 withAnotherDay:(id)arg2;
+ (id)balanceFormatFromStr:(id)arg1;
+ (float)measureSinglelineStringWidth:(id)arg1 andFont:(id)arg2;
+ (void)changeSpaceForLabel:(id)arg1 withLineSpace:(float)arg2 WordSpace:(float)arg3;
+ (void)changeWordSpaceForLabel:(id)arg1 WithSpace:(float)arg2;
+ (void)changeLineSpaceForLabel:(id)arg1 WithSpace:(float)arg2;
+ (struct CGSize)countTextSizeForHeightWithWidth:(double)arg1 andFont:(id)arg2 andText:(id)arg3 andLinespace:(double)arg4;
+ (struct CGSize)countTextSizeForWidthWithHeight:(double)arg1 andFont:(id)arg2 andText:(id)arg3;
+ (struct CGSize)countTextSizeForHeightWithWidth:(double)arg1 andFont:(id)arg2 andText:(id)arg3;
+ (double)get13CurrentTimestamp;
+ (id)getCurrentTimestamp;
+ (id)getCurrentTimesBeijing;
+ (id)getCurrentTimes;
+ (long long)timeSwitchTimestamp:(id)arg1 andFormatter:(id)arg2;
+ (id)timestampSwitchTime:(long long)arg1 andFormatter:(id)arg2;
+ (id)timeFormatted:(int)arg1;
+ (id)arrayWithData:(id)arg1;
+ (id)dataWithArray:(id)arg1;
+ (id)dictionaryWithData:(id)arg1;
+ (id)dataWithDictionary:(id)arg1;
+ (id)arraySortInNumber:(id)arg1;
+ (id)arraySort:(id)arg1;
+ (id)videoSize:(long long)arg1;
+ (id)humanReadableStringFromBytes:(unsigned long long)arg1;
+ (long long)fileSizeAtPath:(id)arg1;
+ (long long)folderSizeAtSpecifyPath:(id)arg1;
+ (id)folderSizeAtPath:(id)arg1;
+ (id)totalDiskSpaceInBytes;
+ (_Bool)canDownload;
+ (id)getPhonefreeDiskSpaceInBytes;
+ (id)stringByURLEncodingStringParameter:(id)arg1;
+ (id)turnToNSArrayWithJsonString:(id)arg1;
+ (id)turnToDictionaryWithJsonString:(id)arg1;
+ (id)turnToJsonStringWithObject:(id)arg1;
+ (id)turnToJsonStringWithDictionary:(id)arg1;
+ (id)videoSizeFromTime:(long long)arg1 andResolution:(id)arg2;
+ (void)netClientStatus;
+ (id)readUser;
+ (_Bool)saveUser;
+ (id)readUserInfo;
+ (_Bool)saveUserInfo;
+ (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
+ (_Bool)yanZhMStr:(id)arg1;
+ (_Bool)password:(id)arg1;
+ (_Bool)validateMailInfo:(id)arg1;
+ (_Bool)validPhoneNum:(id)arg1;
+ (id)deviceString;
+ (id)getKeychainQuery:(id)arg1;
+ (void)save:(id)arg1 data:(id)arg2;
+ (id)load:(id)arg1;
+ (id)uuid;
+ (_Bool)checkProxySetting;
- (id)getStorageDictionary;
- (unsigned long long)freeDiskStorage;
- (unsigned long long)totalDiskCapacity;

@end

