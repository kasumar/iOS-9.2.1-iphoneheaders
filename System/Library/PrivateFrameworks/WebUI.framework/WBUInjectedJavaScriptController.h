/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBUInjectedJavaScriptObserver.h>

@protocol WBUInjectedJavaScriptWebProcessController;
@class WKWebView, _WKRemoteObjectInterface, NSMutableDictionary, NSString;

@interface WBUInjectedJavaScriptController : NSObject <WBUInjectedJavaScriptObserver> {

	WKWebView* _webView;
	id<WBUInjectedJavaScriptWebProcessController> _activityProxy;
	_WKRemoteObjectInterface* _activityJavaScriptObserverInterface;
	NSMutableDictionary* _replyIdentifierToCompletionMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebView:(id)arg1 ;
-(void)invalidate;
-(void)_setUpActivityJavaScriptObserver;
-(void)didRunJavaScriptForActivityWithResult:(id)arg1 replyIdentifier:(id)arg2 ;
-(id)_webProcessActivityProxy;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
