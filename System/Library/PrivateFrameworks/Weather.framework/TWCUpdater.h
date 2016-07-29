/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherJSONHTTPRequest.h>

@protocol WeatherUpdaterDelegate;
@class NSMutableArray;

@interface TWCUpdater : WeatherJSONHTTPRequest {

	NSMutableArray* _updatingCities;
	NSMutableArray* _pendingCities;
	/*^block*/id _weatherCompletionUpdaterHandler;
	id<WeatherUpdaterDelegate> _delegate;

}

@property (nonatomic,copy) id weatherCompletionUpdaterHandler;                        //@synthesize weatherCompletionUpdaterHandler=_weatherCompletionUpdaterHandler - In the implementation block
@property (assign,nonatomic,__weak) id<WeatherUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WeatherUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<WeatherUpdaterDelegate>)delegate;
-(void)failWithError:(id)arg1 ;
-(void)processJSONObject:(id)arg1 ;
-(void)didProcessJSONObject;
-(void)runAndClearWeatherCompletionWithDetail:(unsigned long long)arg1 ;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)failCity:(id)arg1 ;
-(id)_ISO8601Calendar;
-(id)_GMTOffsetRegularExpression;
-(id)_ISO8601DateFormatter;
-(void)_failed:(unsigned long long)arg1 ;
-(void)_processHourlyForecasts:(id)arg1 ;
-(void)_processDailyForecasts:(id)arg1 ;
-(void)_processCurrentConditions:(id)arg1 ;
-(void)_processLinks:(id)arg1 ;
-(void)parsedResultCity:(id)arg1 ;
-(void)_updateNextPendingCity;
-(BOOL)isDataValid:(id)arg1 ;
-(void)addCityToPendingQueue:(id)arg1 ;
-(void)handleNilCity;
-(void)loadRequestForURLPortion:(id)arg1 ;
-(BOOL)isUpdatingCity:(id)arg1 ;
-(id)weatherCompletionUpdaterHandler;
-(void)setWeatherCompletionUpdaterHandler:(id)arg1 ;
-(id)aggregateDictionaryDomain;
@end
