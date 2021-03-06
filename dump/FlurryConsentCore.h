//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface FlurryConsentCore : NSObject
{
    _Bool _inGDPRScope;
    _Bool _legitContractInterestNecessity;
    NSDictionary *_consentStrings;
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool legitContractInterestNecessity; // @synthesize legitContractInterestNecessity=_legitContractInterestNecessity;
@property(retain, nonatomic) NSDictionary *consentStrings; // @synthesize consentStrings=_consentStrings;
@property(nonatomic) _Bool inGDPRScope; // @synthesize inGDPRScope=_inGDPRScope;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg1 withCallbackQueue:(id)arg2;
- (id)getConsent;
- (_Bool)updateUserConsent:(id)arg1;
- (id)init;

@end

