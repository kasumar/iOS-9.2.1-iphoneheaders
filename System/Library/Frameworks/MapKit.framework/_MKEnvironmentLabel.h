/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CAShapeLayer, NSString;

@interface _MKEnvironmentLabel : UIView {

	UILabel* _label;
	CAShapeLayer* _roundedCorner;

}

@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
@end

