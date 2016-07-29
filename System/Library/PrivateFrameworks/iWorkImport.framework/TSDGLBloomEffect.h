/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject {

	CGSize _effectSize;
	CGSize _blurBufferSize;
	TSDGLFrameBuffer* _colorFramebuffer;
	TSDGLFrameBuffer* _blurFramebuffer;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLDataBuffer* _blurTransferDataBuffer;
	TSDGLDataBuffer* _blurDataBuffer;
	TSDGLShader* _blurHorizontalShader;
	TSDGLShader* _blurVerticalShader;
	TSDGLShader* _bloomShader;
	TSDGLShader* _fboTransferShader;
	int _oldViewportRect[4];
	BOOL _oldViewportRectInitialized;

}
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)bindFramebuffer;
-(void)p_setupShaders;
-(void)p_setupBuffers;
-(void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2 ;
-(id)initWithEffectSize:(CGSize)arg1 blurScale:(double)arg2 ;
-(void)drawBloomEffectWithMVPMatrix:(CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4 ;
-(void)dealloc;
-(void)teardown;
@end
