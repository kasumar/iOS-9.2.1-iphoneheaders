/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEORouteHypothesizerUpdaterDelegate.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEORouteHypothesizerDelegate;
@class GEODirectionsRequestFeedback, GEOLocationShifter, GEOComposedWaypoint, NSDate, GEORouteHypothesisOld, GEOLocation, GEOETAUpdater, GEOETARoute, GEORouteAttributes, GEORouteHypothesizerUpdater, GEORoute, NSData, GEOComposedRoute, NSString;

@interface GEORouteHypothesizerOld : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate> {

	id<GEORouteHypothesizerDelegate> _delegate;
	/*^block*/id _handler;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocationShifter* _locationShifter;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	GEORouteHypothesisOld* _hypothesis;
	GEOLocation* _lastLocation;
	NSDate* _suggestedNextUpdateDate;
	NSDate* _lastETARequestDate;
	double _etaUpdateInterval;
	unsigned long long _etaUpdateFrequency;
	GEOETAUpdater* _etaUpdater;
	GEOETARoute* _liveETARoute;
	GEOETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEORouteHypothesizerUpdater* _updater;
	GEORoute* _existingRoute;
	NSData* _usualRouteData;

}

@property (assign,nonatomic) id<GEORouteHypothesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long etaUpdateFrequency;                  //@synthesize etaUpdateFrequency=_etaUpdateFrequency - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                    //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                               //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedNextUpdateDate;                     //@synthesize suggestedNextUpdateDate=_suggestedNextUpdateDate - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<GEORouteHypothesizerDelegate>)arg1 ;
-(void)dealloc;
-(id<GEORouteHypothesizerDelegate>)delegate;
-(void)_commonInit;
-(GEOComposedWaypoint *)source;
-(GEOComposedWaypoint *)destination;
-(NSDate *)arrivalDate;
-(GEOComposedRoute *)route;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(NSDate *)departureDate;
-(void)_updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(BOOL)supportsLiveTraffic;
-(void)setEtaUpdateFrequency:(unsigned long long)arg1 ;
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(unsigned long long)etaUpdateFrequency;
-(NSDate *)suggestedNextUpdateDate;
-(void)_updateETAWithRouteMatch:(id)arg1 ;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)_updateLocationAndETAUpdateInterval;
-(id)initWithExistingRoute:(id)arg1 source:(id)arg2 destination:(id)arg3 etaUpdater:(id)arg4 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4 ;
-(void)_refreshETAWithRouteMatch:(id)arg1 ;
-(BOOL)supportsDirections;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(void)_createUpdaterWithStartingLocation:(id)arg1 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
@end

