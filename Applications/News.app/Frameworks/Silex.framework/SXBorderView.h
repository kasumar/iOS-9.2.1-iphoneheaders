/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SXBorderView : UIView {

	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
+(Class)layerClass;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
@end
