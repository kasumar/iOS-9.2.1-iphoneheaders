/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEncoder.h>

@class HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEncoder {

	HDMetadataValueStatement* _metadataValueStatement;

}

@property (nonatomic,retain) HDMetadataValueStatement * metadataValueStatement;              //@synthesize metadataValueStatement=_metadataValueStatement - In the implementation block
-(void)finish;
-(id)initForHealthDaemon:(id)arg1 database:(id)arg2 ;
-(id)orderedProperties;
-(id)codableRepresentationOfEntity:(id)arg1 collection:(id)arg2 row:(HDSQLiteRowRef)arg3 ;
-(HDMetadataValueStatement *)metadataValueStatement;
-(void)setMetadataValueStatement:(HDMetadataValueStatement *)arg1 ;
@end
