/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTUserProfileRequestDelegate;
@class YTUserProfile;

@interface YTUserProfileRequest : YTXMLHTTPRequest {

	id<YTUserProfileRequestDelegate> _delegate;
	YTUserProfile* _profile;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)requestProfileForCurrentUser;
-(void)requestProfileForUsername:(id)arg1 ;
@end

