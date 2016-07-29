/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIControlCenterButton.h>

@class NSString, NSNumber;

@interface SBControlCenterButton : SBUIControlCenterButton {

	NSString* _identifier;
	NSNumber* _sortKey;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * sortKey;                 //@synthesize sortKey=_sortKey - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSortKey:(NSNumber *)arg1 ;
-(void)_updateForStateChange;
-(NSNumber *)sortKey;
@end
