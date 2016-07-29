/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _errorHandler;
	/*^block*/id _initFinishedHandler;
	/*^block*/id _updateFinishedHandler;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acUpdateURL;
+(id)acInitUrl;
-(void)dealloc;
-(void)requesterDidCancel:(id)arg1 ;
-(void)setRequester:(GEORequester *)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(GEORequester *)requester;
-(void)cancelRequest;
-(void)requesterDidFinish:(id)arg1 ;
-(void)startUpdateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startInitRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end
