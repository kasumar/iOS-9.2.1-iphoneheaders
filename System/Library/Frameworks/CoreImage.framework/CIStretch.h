/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	CIVector* inputSize;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) CIVector * inputSize; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputPoint;
-(CIVector *)inputSize;
-(void)setInputSize:(CIVector *)arg1 ;
-(CGRect)computeDOD:(vec4)arg1 ;
-(void)setInputPoint:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputImage:(CIImage *)arg1 ;
@end

