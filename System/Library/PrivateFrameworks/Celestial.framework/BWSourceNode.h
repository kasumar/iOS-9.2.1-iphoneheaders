/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWSourceNodeErrorDelegate;
@interface BWSourceNode : BWNode {

	id<BWSourceNodeErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (assign,nonatomic) id<BWSourceNodeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
-(id)nodeType;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)setErrorDelegate:(id<BWSourceNodeErrorDelegate>)arg1 ;
-(id<BWSourceNodeErrorDelegate>)errorDelegate;
-(OpaqueCMClockRef)clock;
@end

