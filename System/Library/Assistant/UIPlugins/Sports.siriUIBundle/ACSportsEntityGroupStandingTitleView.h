/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class UILabel, SASportsEntityGroup;

@interface ACSportsEntityGroupStandingTitleView : ACSportsEntityView {

	UILabel* _nameLabel;

}

@property (nonatomic,retain) SASportsEntityGroup * entity; 
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)contentHeight;
@end

