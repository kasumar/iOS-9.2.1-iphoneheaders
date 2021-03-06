/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class AVMetadataFaceObject;

@interface CAMFaceResult : NSObject {

	long long _identifier;
	double _rollAngle;
	AVMetadataFaceObject* _underlyingFaceObject;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double rollAngle;                                         //@synthesize rollAngle=_rollAngle - In the implementation block
@property (nonatomic,readonly) AVMetadataFaceObject * underlyingFaceObject;              //@synthesize underlyingFaceObject=_underlyingFaceObject - In the implementation block
-(CGRect)bounds;
-(id)description;
-(long long)identifier;
-(double)rollAngle;
-(AVMetadataFaceObject *)underlyingFaceObject;
-(id)initWithFaceObject:(id)arg1 ;
-(id)burstMetadataRepresentation;
@end

