//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServerRequest.h"

@class GCDWebServerMIMEStreamParser, NSMutableArray;

@interface GCDWebServerMultiPartFormRequest : GCDWebServerRequest
{
    GCDWebServerMIMEStreamParser *_parser;
    NSMutableArray *_arguments;
    NSMutableArray *_files;
}

+ (id)mimeType;
@property(retain, nonatomic) NSMutableArray *files; // @synthesize files=_files;
@property(retain, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (id)description;
- (id)firstFileForControlName:(id)arg1;
- (id)firstArgumentForControlName:(id)arg1;
- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;
- (id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;

@end

