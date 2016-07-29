/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBProcess;


@protocol FBSystemServiceClient <NSObject>
@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,retain) id<FBSystemServiceFacilityClient> facilityClient; 
@required
-(NSObject*<OS_xpc_object>)connection;
-(int)pid;
-(FBProcess *)process;
-(id<FBSystemServiceFacilityClient>)facilityClient;
-(void)setFacilityClient:(id)arg1;

@end
