/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	id<ICSLoggingDelegate> _loggingDelegate;

}
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
@end
