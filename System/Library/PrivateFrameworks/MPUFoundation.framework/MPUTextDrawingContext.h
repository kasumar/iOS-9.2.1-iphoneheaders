/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSString, NSAttributedString, NSStringDrawingContext, NSDictionary, UIImage;

@interface MPUTextDrawingContext : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSStringDrawingContext* _stringDrawingContext;
	long long _stringDrawingOptions;
	NSDictionary* _uniformTextAttributes;
	double _firstBaselineOffsetFromTop;
	double _lastBaselineOffsetFromBottom;
	UIImage* _image;
	CGSize _boundingSize;

}

@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                            //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSStringDrawingContext * stringDrawingContext;                //@synthesize stringDrawingContext=_stringDrawingContext - In the implementation block
@property (assign,nonatomic) long long stringDrawingOptions;                               //@synthesize stringDrawingOptions=_stringDrawingOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * uniformTextAttributes;                           //@synthesize uniformTextAttributes=_uniformTextAttributes - In the implementation block
@property (assign,nonatomic) CGSize boundingSize;                                          //@synthesize boundingSize=_boundingSize - In the implementation block
@property (assign,nonatomic) double firstBaselineOffsetFromTop;                            //@synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop - In the implementation block
@property (assign,nonatomic) double lastBaselineOffsetFromBottom;                          //@synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom - In the implementation block
@property (setter=_setImage:,getter=_image,nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)_image;
-(NSString *)text;
-(NSAttributedString *)attributedText;
-(void)_setText:(id)arg1 ;
-(CGSize)boundingSize;
-(NSStringDrawingContext *)stringDrawingContext;
-(void)_setImage:(id)arg1 ;
-(void)_setAttributedText:(id)arg1 ;
-(void)_setBoundingSize:(CGSize)arg1 ;
-(void)_setFirstBaselineOffsetFromTop:(double)arg1 ;
-(void)_setLastBaselineOffsetFromBottom:(double)arg1 ;
-(void)_setUniformTextAttributes:(id)arg1 ;
-(void)_setStringDrawingContext:(id)arg1 ;
-(void)_setStringDrawingOptions:(long long)arg1 ;
-(long long)stringDrawingOptions;
-(NSDictionary *)uniformTextAttributes;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
@end

