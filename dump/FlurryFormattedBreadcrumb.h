//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface FlurryFormattedBreadcrumb : NSObject <NSCoding>
{
    NSString *_breadcrumbStr;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *breadcrumbStr; // @synthesize breadcrumbStr=_breadcrumbStr;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

