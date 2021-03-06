/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>

@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {

	struct {
		unsigned path : 1;
		unsigned tightPathBounds : 1;
	}  mMaskInvalidFlags;
	CGPathRef mCachedPath;
	CGPathRef mCachedPathNoScale;
	CGRect mCachedTightPathBounds;
	CGRect mCachedTightPathBoundsNoScale;
	double mPathScale;
	TSDInfoGeometry* mDynamicInfoGeometry;
	TSDPathSource* mDynamicPathSource;
	BOOL mScalingInMaskMode;

}

@property (assign,nonatomic) double pathScale; 
@property (nonatomic,readonly) TSDImageLayout * imageLayout; 
-(id)computeLayoutGeometry;
-(id)infoGeometry;
-(id)dependentLayouts;
-(id)pathSource;
-(CGPathRef)p_cachedPath;
-(id)maskInfo;
-(TSDImageLayout *)imageLayout;
-(void)setPathScale:(double)arg1 ;
-(void)p_createDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg1 ;
-(void)p_destroyDynamicCopies;
-(CGRect)p_cachedTightPathBoundsNoScale;
-(CGRect)p_cachedTightPathBounds;
-(double)pathScale;
-(void)p_calculateCachedPathIfNecessary;
-(CGPathRef)p_cachedPathNoScale;
-(void)p_calculateTightPathBoundsIfNecessary;
-(CGAffineTransform)affineTransformForTightPathBounds;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(CGPathRef)path;
-(void)invalidatePath;
-(CGRect)pathBounds;
@end

