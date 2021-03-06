/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UITextView, UIActivityIndicatorView, UIImage, NSAttributedString, UIButton;

@interface PKWelcomeView : UIView {

	UIImageView* _backgroundView;
	UIImageView* _shadowView;
	UIImageView* _headerView;
	UITextView* _titleView;
	UITextView* _messageView;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _showActivityIndicator;
	UIImage* _headerImage;
	NSAttributedString* _title;
	NSAttributedString* _message;
	UIButton* _actionButton;

}

@property (assign,nonatomic) BOOL showActivityIndicator;              //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                   //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSAttributedString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                 //@synthesize actionButton=_actionButton - In the implementation block
+(double)defaultHeight;
+(id)titleFont;
+(BOOL)isAvailable;
+(UIEdgeInsets)margins;
+(double)headerImageRegionHeight;
+(double)bodySeparation;
+(id)messageFont;
+(UIEdgeInsets)textInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)title;
-(NSAttributedString *)message;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(UIButton *)actionButton;
-(id)initWithHeight:(double)arg1 ;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(BOOL)showActivityIndicator;
@end

