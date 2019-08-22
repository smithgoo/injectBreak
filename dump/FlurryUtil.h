//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FlurryUtil : NSObject
{
}

+ (_Bool)assertNotNil:(id)arg1;
+ (id)getIdentifierForVendor;
+ (_Bool)isIPad;
+ (_Bool)canvasInLandscape;
+ (void)substituteParamsInString:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3;
+ (id)encodeIllegalCharsToPercentEscapeString:(id)arg1;
+ (id)fileSize:(id)arg1;
+ (id)trimString:(id)arg1 maxLength:(unsigned long long)arg2;
+ (_Bool)isInBackground;
+ (double)reduceLocationPrecision:(double)arg1 withDecimalPlaces:(int)arg2;
+ (id)getFixedSalt;
+ (_Bool)updateIfChangedCookieValue:(id)arg1 forCookieKey:(id)arg2;
+ (id)md5String:(id)arg1;
+ (_Bool)hasUserOptedOut;
+ (void)setFlurryOptOut:(_Bool)arg1;
+ (long long)lastBootTime;
+ (unsigned long long)getDiskSize;
+ (_Bool)isInAppExtension;
+ (int)buildEnvironment;
+ (_Bool)isInWatchExtension;
+ (unsigned long long)getFreeDiskspace;
+ (int)int32FromNSInteger:(long long)arg1;
+ (unsigned int)uint32FromNSUInteger:(unsigned long long)arg1;
+ (id)allCounters;
+ (void)printCounters;
+ (void)decrementCounter:(id)arg1;
+ (void)decrementCounter:(id)arg1 locationName:(char *)arg2;
+ (void)incrementCounter:(id)arg1;
+ (void)incrementCounter:(id)arg1 locationName:(char *)arg2;
+ (_Bool)isAdTrackingEnabled;
+ (id)getFlurryId;
+ (char *)getLimit;
+ (char *)getUser;
+ (char *)getModule;
+ (char *)getMgr;
+ (char *)getId;
+ (id)generateCFUUIDBasedUID;
+ (id)generateCFUUID;
+ (void)cleanupStoredIdentifierForVendor;
+ (id)dataFromHexString:(id)arg1;
+ (id)hashDataToHexString:(char *)arg1 length:(unsigned long long)arg2;
+ (id)hashData:(id)arg1;
+ (BOOL)appIsCracked;
+ (BOOL)deviceIsJailbroken;
+ (id)devicePlatform;
+ (id)filePathDirectory;
+ (id)oldFilePathDirectoryUptilAgentVersion109;
+ (id)hexadecimalStringForData:(id)arg1;
+ (struct _NSRange)flurryRangeOfData:(id)arg1 inData:(id)arg2;
+ (int)dataChecksum:(id)arg1;
+ (void)generateChecksumTable;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (struct CGRect)deviceScreenBounds;
+ (void)archiveDictionary:(id)arg1 toFile:(id)arg2;
+ (void)archiveObject:(id)arg1 toFile:(id)arg2;
+ (void)_archiveObject:(id)arg1 toPath:(id)arg2;
+ (void)_TVOS_archiveObject:(id)arg1 toPath:(id)arg2;
+ (id)safeUnarchiveObjectFromFSWithFile:(id)arg1;
+ (id)safeUnarchiveObjectWithFile:(id)arg1;
+ (id)_unarchiveFromNSUserDefaultsWithPath:(id)arg1;
+ (id)_safeUnarchiveObjectWithFile:(id)arg1;
+ (_Bool)dataExistsAtPath:(id)arg1;
+ (void)handleException:(id)arg1;
+ (void)setShowErrorInLogEnabled:(_Bool)arg1;
+ (int)logLevel;
+ (void)setLogLevel:(int)arg1;
+ (void)assertNotRunningOnQueue:(id)arg1;
+ (void)assertRunningOnQueue:(id)arg1;
+ (void)assertThreadIsNotMain;
+ (void)setDebugAssertEnabled:(_Bool)arg1;
+ (void)assert:(_Bool)arg1 tag:(const char *)arg2;
+ (_Bool)assertNotNil:(id)arg1 tag:(const char *)arg2;

@end

