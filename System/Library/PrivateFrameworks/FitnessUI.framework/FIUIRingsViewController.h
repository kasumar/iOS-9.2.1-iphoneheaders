/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIGLViewController.h>
#import <libobjc.A.dylib/FIUIRingGroupAnimationStatusDelegate.h>

@class GLKTextureInfo, NSArray, UIImage;

@interface FIUIRingsViewController : FIUIGLViewController <FIUIRingGroupAnimationStatusDelegate> {

	int _numRingsPerGroup;
	BOOL _ringVAOinit;
	BOOL _iconVAOinit;
	BOOL _buffersCreated;
	BOOL _prevRingsAreEmpty;
	BOOL _didSetup;
	SCD_Struct_FI10* _ringVertices;
	_GLKVector2* _ringVertexCoordinates;
	_GLKVector2* _ringVertexPositions;
	SCD_Struct_FI11* _iconSpriteVertices;
	GLKTextureInfo* _iconSpriteTexture;
	GLKMatrix4 _projectionMatrix;
	unsigned _ringProgram;
	unsigned _ringEndCapProgram;
	unsigned _ringEmptyProgram;
	unsigned _flatColorProgram;
	unsigned _iconSpriteProgram;
	unsigned _coordinateBuffer;
	unsigned _positionBuffer;
	unsigned _coordPercentBuffer;
	unsigned _iconSpriteVertexBuffer;
	unsigned _ringsVAO;
	unsigned _iconsVAO;
	unsigned _transformUniform;
	unsigned _endCapShadowDistanceUniform;
	unsigned _iconSpriteTransformUniform;
	unsigned _iconSpriteSamplerUniform;
	unsigned _iconSpriteIconsPerDimensionUniform;
	unsigned _positionAttribute;
	unsigned _color1Attribute;
	unsigned _color2Attribute;
	unsigned _sizesAttribute;
	unsigned _percentagesAttribute;
	unsigned _coordinateAttribute;
	unsigned _coordPercentAttribute;
	unsigned _trigResultsAttribute;
	unsigned _iconSpritePositionAttribute;
	unsigned _iconSpriteSizeAttribute;
	unsigned _iconSpriteColorAttribute;
	unsigned _iconSpriteTextureOffsetAttribute;
	double _screenScale;
	double _cachedPointSize[3];
	double _cachedThickness[3];
	CGPoint _cachedPosition[3];
	CGPoint _cachedGroupCenter;
	int _ringGroupsPerRow;
	NSArray* _ringGroups;
	double _ringSpacing;
	UIImage* _iconSpriteImage;
	unsigned long long _iconTextureRows;
	unsigned long long _iconTextureColumns;

}

@property (nonatomic,readonly) NSArray * ringGroups;                             //@synthesize ringGroups=_ringGroups - In the implementation block
@property (assign,nonatomic) int ringGroupsPerRow;                               //@synthesize ringGroupsPerRow=_ringGroupsPerRow - In the implementation block
@property (assign,nonatomic) double ringSpacing;                                 //@synthesize ringSpacing=_ringSpacing - In the implementation block
@property (nonatomic,retain) UIImage * iconSpriteImage;                          //@synthesize iconSpriteImage=_iconSpriteImage - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureRows;                 //@synthesize iconTextureRows=_iconTextureRows - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureColumns;              //@synthesize iconTextureColumns=_iconTextureColumns - In the implementation block
+(id)_ringsViewControllerConfiguredForCompanionWithNumberOfRings:(long long)arg1 ringType:(long long)arg2 ;
+(id)_iconSpriteImage;
+(id)ringsViewControllerConfiguredForThreeRingsOnCompanion;
+(id)ringsViewControllerConfiguredForOneRingOnCompanionOfType:(long long)arg1 ;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(unsigned)drawInRect:(CGRect)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)update;
-(id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2 ;
-(void)setIconSpriteImage:(UIImage *)arg1 ;
-(void)setIconTextureColumns:(unsigned long long)arg1 ;
-(void)setIconTextureRows:(unsigned long long)arg1 ;
-(NSArray *)ringGroups;
-(void)ringGroupDidBeginAnimations:(id)arg1 ;
-(void)_setRingGroups:(id)arg1 ;
-(void)_context_loadUniformsAndAttributes;
-(void)_context_createBuffers;
-(void)_destroyBuffers;
-(void)_updateProjectionMatrix;
-(void)_setupIfNecessary;
-(void)_context_prepareForRingDraw:(BOOL)arg1 ;
-(void)_context_loadRingEmptyProgramIfNeeded;
-(void)_context_loadRingDataForGroupAtIndex:(long long)arg1 ;
-(void)_context_loadFlatColorProgramIfNeeded;
-(void)_context_prepareForIconDraw;
-(void)_loadIconDataForGroupAtIndex:(long long)arg1 ;
-(int)ringGroupsPerRow;
-(void)setRingGroupsPerRow:(int)arg1 ;
-(double)ringSpacing;
-(void)setRingSpacing:(double)arg1 ;
-(UIImage *)iconSpriteImage;
-(unsigned long long)iconTextureRows;
-(unsigned long long)iconTextureColumns;
@end

