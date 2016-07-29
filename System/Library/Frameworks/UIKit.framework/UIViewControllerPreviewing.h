/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView;


@protocol UIViewControllerPreviewing <NSObject>
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@required
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;

@end
