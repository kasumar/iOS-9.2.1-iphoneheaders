/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface MRDRemoteControlContext : NSObject {

	NSMutableArray* _routedCommands;
	NSString* _contextID;
	NSString* _originatingAppDisplayID;

}

@property (nonatomic,readonly) NSString * contextID;                            //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) NSString * originatingAppDisplayID;              //@synthesize originatingAppDisplayID=_originatingAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSArray * routedCommands; 
-(NSString *)originatingAppDisplayID;
-(void)addRoutedCommand:(id)arg1 ;
-(id)initWithContextID:(id)arg1 originatingAppDisplayID:(id)arg2 ;
-(NSArray *)routedCommands;
-(void)clearRoutedCommands;
-(void)dealloc;
-(NSString *)contextID;
@end
