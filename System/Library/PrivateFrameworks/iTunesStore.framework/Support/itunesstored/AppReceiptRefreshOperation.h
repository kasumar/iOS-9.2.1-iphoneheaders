/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class AppReceiptOperationResult, AppReceiptRefreshOperationOptions;

@interface AppReceiptRefreshOperation : ISOperation {

	AppReceiptOperationResult* _operationResult;
	AppReceiptRefreshOperationOptions* _options;
	/*^block*/id _resultsBlock;

}
-(BOOL)_wasInstalledByConfigurator:(id)arg1 ;
-(void)setResultsBlock:(/*^block*/id)arg1 ;
-(BOOL)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)_preformMigrationCheckForApp:(id)arg1 ;
-(id)_optionsForApplication:(id)arg1 ;
-(id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3 ;
-(void)_checkExpirationNotificationDate:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)initWithOptions:(id)arg1 ;
@end
