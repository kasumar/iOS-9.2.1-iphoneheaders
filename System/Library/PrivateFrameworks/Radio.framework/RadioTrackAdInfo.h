/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RadioTrackAdInfo : NSObject <NSSecureCoding> {

	BOOL _gatewayAdSlot;
	NSString* _slotIdentifier;

}

@property (getter=isGatewayAdSlot,nonatomic,readonly) BOOL gatewayAdSlot;              //@synthesize gatewayAdSlot=_gatewayAdSlot - In the implementation block
@property (nonatomic,copy,readonly) NSString * slotIdentifier;                         //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAdInfoDictionary:(id)arg1 ;
-(NSString *)slotIdentifier;
-(BOOL)isGatewayAdSlot;
@end

