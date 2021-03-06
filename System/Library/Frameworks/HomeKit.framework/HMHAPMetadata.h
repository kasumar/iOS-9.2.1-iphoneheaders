/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray, NSDictionary;

@interface HMHAPMetadata : NSObject <NSSecureCoding> {

	NSNumber* _version;
	NSArray* _hapValueUnits;
	NSArray* _hapCharacteristics;
	NSArray* _hapServices;
	NSDictionary* _assistantServices;
	NSArray* _assistantCharacteristics;
	NSDictionary* _assistantUnits;
	NSArray* _accessoryCategories;

}

@property (nonatomic,retain) NSNumber * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * hapValueUnits;                         //@synthesize hapValueUnits=_hapValueUnits - In the implementation block
@property (nonatomic,retain) NSArray * hapCharacteristics;                    //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * hapServices;                           //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantServices;                //@synthesize assistantServices=_assistantServices - In the implementation block
@property (nonatomic,retain) NSArray * assistantCharacteristics;              //@synthesize assistantCharacteristics=_assistantCharacteristics - In the implementation block
@property (nonatomic,retain) NSDictionary * assistantUnits;                   //@synthesize assistantUnits=_assistantUnits - In the implementation block
@property (nonatomic,retain) NSArray * accessoryCategories;                   //@synthesize accessoryCategories=_accessoryCategories - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setSharedInstance:(id)arg1 ;
+(id)getSharedInstance;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(id)mapReadCharcteristicFromAssistantName:(id)arg1 ;
-(id)mapFromAssistantServiceName:(id)arg1 ;
-(id)mapCharacteristicValueType:(id)arg1 ;
-(id)mapWriteCharcteristicFromAssistantName:(id)arg1 ;
-(NSArray *)assistantCharacteristics;
-(void)setAssistantCharacteristics:(NSArray *)arg1 ;
-(NSArray *)hapValueUnits;
-(void)setHapValueUnits:(NSArray *)arg1 ;
-(NSArray *)hapCharacteristics;
-(void)setHapCharacteristics:(NSArray *)arg1 ;
-(NSArray *)hapServices;
-(void)setHapServices:(NSArray *)arg1 ;
-(void)setAssistantServices:(NSDictionary *)arg1 ;
-(void)setAssistantUnits:(NSDictionary *)arg1 ;
-(NSDictionary *)assistantServices;
-(NSDictionary *)assistantUnits;
-(id)getAssistantCharacteristic:(id)arg1 ;
-(id)serviceTypeDescription:(id)arg1 ;
-(id)serviceTypeLocalizedDescription:(id)arg1 ;
-(id)characteristicTypeDescription:(id)arg1 ;
-(id)characteristicTypeLocalizedDescription:(id)arg1 ;
-(id)characteristicValueUnit:(id)arg1 ;
-(BOOL)supportsLocalization:(id)arg1 ;
-(id)mapToAssistantServiceName:(id)arg1 ;
-(id)mapToAssistantCharacteristicName:(id)arg1 ;
-(id)mapToAssistantUnitName:(id)arg1 ;
-(id)mapFromAssistantUnitName:(id)arg1 ;
-(id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2 ;
-(id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 ;
-(NSArray *)accessoryCategories;
-(void)setAccessoryCategories:(NSArray *)arg1 ;
@end

