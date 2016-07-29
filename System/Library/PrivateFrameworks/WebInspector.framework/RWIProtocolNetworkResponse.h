/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) double status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * headersText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (nonatomic,copy) NSString * requestHeadersText; 
@property (assign,nonatomic) BOOL fromDiskCache; 
@property (nonatomic,retain) RWIProtocolNetworkResourceTiming * timing; 
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(double)status;
-(void)setStatus:(double)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithUrl:(id)arg1 status:(double)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 ;
-(void)setHeadersText:(NSString *)arg1 ;
-(NSString *)headersText;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(void)setRequestHeadersText:(NSString *)arg1 ;
-(NSString *)requestHeadersText;
-(void)setFromDiskCache:(BOOL)arg1 ;
-(BOOL)fromDiskCache;
-(NSString *)statusText;
-(void)setMimeType:(NSString *)arg1 ;
-(RWIProtocolNetworkResourceTiming *)timing;
-(void)setTiming:(RWIProtocolNetworkResourceTiming *)arg1 ;
@end
