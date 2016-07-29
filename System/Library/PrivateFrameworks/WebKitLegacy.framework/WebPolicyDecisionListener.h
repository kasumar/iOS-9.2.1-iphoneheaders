/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebPolicyDecisionListener.h>

@class WebPolicyDecisionListenerPrivate, NSString;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {

	WebPolicyDecisionListenerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)_initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_usePolicy:(int)arg1 ;
-(void)dealloc;
-(void)ignore;
-(void)use;
-(void)_invalidate;
-(void)download;
@end
