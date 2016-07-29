/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSData, NSString;

@interface NEFlowMetaData : NSObject {

	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppSigningIdentifier;

}

@property (readonly) NSData * sourceAppUniqueIdentifier;                 //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (readonly) NSString * sourceAppSigningIdentifier;              //@synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier - In the implementation block
-(id)description;
-(id)initFromFlow:(NEFlowRef)arg1 ;
-(NSString *)sourceAppSigningIdentifier;
-(NSData *)sourceAppUniqueIdentifier;
@end
