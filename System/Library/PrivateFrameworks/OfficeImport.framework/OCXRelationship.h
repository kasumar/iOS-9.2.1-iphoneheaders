/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCXRelationship : NSObject {

	NSString* mIdString;
	NSString* mType;
	NSString* mTarget;
	BOOL mExternal;

}

@property (nonatomic,readonly) NSString * idString; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * target; 
-(void)dealloc;
-(NSString *)type;
-(NSString *)target;
-(NSString *)idString;
-(id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(void)writeToStreamWriter:(id)arg1 ;
@end

