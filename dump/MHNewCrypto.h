//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MHNewCrypto : NSObject
{
    struct ngx_vod_jack_key_data_s jack_key;
}

- (unsigned long long)decrypt:(char *)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool isCrypted;
- (id)initWithKey:(const char *)arg1 index:(long long)arg2;

@end

