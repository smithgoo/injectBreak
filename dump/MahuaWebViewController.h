//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

#import "WKDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class MahuaShareView, NSString, UIProgressView, WKUserContentController, WKWebView;

@interface MahuaWebViewController : MahuaParentsViewController <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, WKDelegate>
{
    WKWebView *webView;
    WKUserContentController *userContentController;
    _Bool _isPopViewController;
    _Bool _didWebViewLoadOK;
    NSString *_urlStr;
    NSString *_titleStr;
    MahuaShareView *_shareView;
    long long _type;
    UIProgressView *_progress;
    NSString *_webViewTitleStr;
}

@property(copy, nonatomic) NSString *webViewTitleStr; // @synthesize webViewTitleStr=_webViewTitleStr;
@property(retain, nonatomic) UIProgressView *progress; // @synthesize progress=_progress;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool didWebViewLoadOK; // @synthesize didWebViewLoadOK=_didWebViewLoadOK;
@property(retain, nonatomic) MahuaShareView *shareView; // @synthesize shareView=_shareView;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(nonatomic) _Bool isPopViewController; // @synthesize isPopViewController=_isPopViewController;
- (void).cxx_destruct;
- (void)endFullScreen;
- (void)begainFullScreen;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)shareClickWithDict:(id)arg1;
- (void)shareImageView:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back;
- (void)didReceiveMemoryWarning;
- (id)initWithUrlStr:(id)arg1 andTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

