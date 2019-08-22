//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface FlurryConsent : NSObject
{
    _Bool _isGDPRScope;
    _Bool _isLICNEnabled;
    NSDictionary *_consentStrings;
}

+ (id)getConsent;
+ (_Bool)updateConsentInformation:(id)arg1;
@property(nonatomic) _Bool isLICNEnabled; // @synthesize isLICNEnabled=_isLICNEnabled;
@property(retain, nonatomic) NSDictionary *consentStrings; // @synthesize consentStrings=_consentStrings;
@property(nonatomic) _Bool isGDPRScope; // @synthesize isGDPRScope=_isGDPRScope;
- (void).cxx_destruct;
- (id)initWithGDPRScope:(_Bool)arg1 andConsentStrings:(id)arg2;
- (id)initWithGDPRScope:(_Bool)arg1 consentStrings:(id)arg2 andLICNEnabled:(_Bool)arg3;

@end
