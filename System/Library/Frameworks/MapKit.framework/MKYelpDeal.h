/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapItemVendorDeal.h>

@class NSString;

@interface MKYelpDeal : NSObject <MKMapItemVendorDeal> {

	NSString* identifier;
	NSString* title;
	NSString* urlString;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * urlString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dealWithJSONObject:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
@end

