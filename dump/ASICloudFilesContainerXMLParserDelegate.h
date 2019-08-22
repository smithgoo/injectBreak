//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class ASICloudFilesContainer, NSMutableArray, NSString;

@interface ASICloudFilesContainerXMLParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *containerObjects;
    NSString *currentContent;
    NSString *currentElement;
    ASICloudFilesContainer *currentObject;
}

@property(retain) ASICloudFilesContainer *currentObject; // @synthesize currentObject;
@property(retain) NSString *currentContent; // @synthesize currentContent;
@property(retain) NSString *currentElement; // @synthesize currentElement;
@property(retain) NSMutableArray *containerObjects; // @synthesize containerObjects;
- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

