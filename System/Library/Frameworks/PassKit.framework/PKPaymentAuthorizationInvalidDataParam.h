/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam {

	BOOL _animated;
	long long _dataType;
	long long _status;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL animated;                   //@synthesize animated=_animated - In the implementation block
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSError *)error;
-(void)setDataType:(long long)arg1 ;
-(long long)dataType;
-(void)setError:(NSError *)arg1 ;
@end

