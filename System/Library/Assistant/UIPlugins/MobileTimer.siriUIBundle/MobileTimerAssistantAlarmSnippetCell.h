/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SAAlarmObject, AlarmView, NSArray;

@interface MobileTimerAssistantAlarmSnippetCell : SiriUIContentCollectionViewCell {

	SAAlarmObject* _alarm;
	AlarmView* _alarmView;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) SAAlarmObject * alarm;                     //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
-(void)alarmActiveChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)reuseIdentifier;
-(void)updateConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(void)setAlarm:(SAAlarmObject *)arg1 ;
-(SAAlarmObject *)alarm;
@end
