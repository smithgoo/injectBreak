//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, UIScrollView;

@protocol MahuaCommentProtocol <NSObject>
- (void)loadMoreCommentType:(long long)arg1;
- (void)zanCommentWithParentId:(NSNumber *)arg1 commentType:(long long)arg2 changeStateBlock:(void (^)(void))arg3;
- (void)keyboardWillShow;
- (void)commentScrollViewDidScroll:(UIScrollView *)arg1;
- (void)endEditingCommentView;
- (_Bool)beginEditingCommentView;
@end

