/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCH3DShadowsRenderer
@required
-(id)shadowsFBOForContext:(id)arg1;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/id)arg3;
-(void)unprotectShadowInSession:(id)arg1;
-(float)blurSlackForQuality:(float)arg1;
-(void)invalidate;

@end
