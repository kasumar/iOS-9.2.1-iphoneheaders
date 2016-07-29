/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Reminders/RemindersCheckboxViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RemindersCheckboxCellDelegate, UITextViewDelegate;
@class NSAttributedString, UILabel, NSString, RemindersCheckboxView, UIView, UIButton, NSMutableArray, UIColor, NSLayoutConstraint, EKExpandingTextView, NSURL, NSUserActivity, NSDictionary;

@interface RemindersCheckboxCell : UITableViewCell <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {

	NSAttributedString* _titleAttrString;
	NSAttributedString* _deadlineAttrString;
	NSAttributedString* _locationAttrString;
	NSAttributedString* _notesAttrString;
	NSAttributedString* _calendarAttrString;
	UILabel* _emptyTitlePositioningLabel;
	UILabel* _deadlineLabel;
	UILabel* _locationLabel;
	UILabel* _notesLabel;
	UILabel* _calendarLabel;
	NSString* _matchingSearchTerm;
	RemindersCheckboxView* _checkboxView;
	UIView* _imageView;
	UIView* _highlightView;
	UIButton* _actionButton;
	NSMutableArray* _textViewTrailingConstraints;
	int _appearance;
	unsigned long long _contentMask;
	unsigned long long _positionOfDeadline;
	UIColor* _overdueTextColor;
	NSLayoutConstraint* _textViewBaslineConstraint;
	NSLayoutConstraint* _deadlineBaselineConstraint;
	NSLayoutConstraint* _locationBaselineConstraint;
	NSLayoutConstraint* _notesBaselineConstraint;
	NSLayoutConstraint* _calendarBaselineConstraint;
	NSLayoutConstraint* _bottomPaddingConstraint;
	NSLayoutConstraint* _checkboxWidthConstraint;
	double _checkboxWidthOverride;
	double _checkboxRightMarginOverride;
	BOOL _completed;
	BOOL _overdue;
	UIColor* _calendarColor;
	long long _priorityLevel;
	id<RemindersCheckboxCellDelegate> _delegate;
	id<UITextViewDelegate> _textViewDelegate;
	EKExpandingTextView* _textView;
	NSURL* _actionURL;
	NSUserActivity* _userActivity;
	NSDictionary* _titleAttributes;

}

@property (nonatomic,copy) UIColor * calendarColor;                                          //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) long long priorityLevel;                                        //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) BOOL completed;                                                 //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL overdue;                                                   //@synthesize overdue=_overdue - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersCheckboxCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate;                 //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (nonatomic,readonly) EKExpandingTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (getter=isChecked,nonatomic,readonly) BOOL checked; 
@property (assign,nonatomic) BOOL checkboxHidden; 
@property (nonatomic,copy) NSURL * actionURL;                                                //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy) NSUserActivity * userActivity;                                    //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,retain) NSDictionary * titleAttributes;                                 //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesCalendarLabel:(int)arg1 ;
+(double)marginWidthWithCheckboxWidth:(double)arg1 rightMargin:(double)arg2 ;
+(id)whiteColorForTitleWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(id)whiteColorForDetailsWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(id)uncoloredPriorityImageForLevel:(long long)arg1 ;
+(double)marginWidth;
-(void)updateMaxLayoutWidth;
-(void)updateTitleAttributes;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned long long)arg4 deadlinePosition:(unsigned long long)arg5 width:(double)arg6 ;
-(void)addTextView;
-(id)overdueDetailAttributes;
-(id)actionButtonWithImage:(id)arg1 ;
-(void)_launchUserActivity;
-(void)setActionURL:(id)arg1 buttonColor:(id)arg2 ;
-(void)addTextViewConstraints:(BOOL)arg1 ;
-(void)setCheckboxEnabled:(BOOL)arg1 ;
-(void)setOverdue:(BOOL)arg1 color:(id)arg2 ;
-(void)resetTextViewAttributes;
-(id)plainTextTitle;
-(void)updateDeadlineAttributes;
-(id)detailAttributes;
-(double)checkboxWidthNeeded;
-(void)_tap;
-(id)titleAttributedString:(id)arg1 ;
-(void)updateBottomPaddingConstraint;
-(void)fontSizeChanged;
-(void)setDeadline:(id)arg1 ;
-(id)priorityImageForLevel:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned long long)arg4 deadlinePosition:(unsigned long long)arg5 width:(double)arg6 checkboxWidth:(double)arg7 ;
-(void)addActionButton:(id)arg1 ;
-(id)detailsFont;
-(void)setOverdue:(BOOL)arg1 ;
-(BOOL)checkboxHidden;
-(void)checkboxTapped;
-(void)updateTitleString;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)updateTextAttributes;
-(void)updateTitleConstraintsIfNeeded;
-(void)vibrantize;
-(id)deadlineAttributedString;
-(NSURL *)actionURL;
-(void)setCheckboxHidden:(BOOL)arg1 ;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(id)notesAttributedString;
-(id)calendarAttributedString;
-(void)setMatchingSearchTerm:(id)arg1 ;
-(void)setVibrantHightlight:(BOOL)arg1 ;
-(id)locationAttributedString;
-(BOOL)overdue;
-(BOOL)hasDeadline;
-(id)titleFont:(BOOL)arg1 ;
-(BOOL)completed;
-(void)setDelegate:(id<RemindersCheckboxCellDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<RemindersCheckboxCellDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)_shouldMaskToBoundsWhileAnimating;
-(void)prepareForReuse;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(id)titleAttributedString;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(BOOL)hasTitle;
-(EKExpandingTextView *)textView;
-(void)setLocation:(id)arg1 ;
-(BOOL)isChecked;
-(BOOL)hasLocation;
-(void)setCalendarName:(id)arg1 ;
-(BOOL)hasNotes;
-(void)setPriorityLevel:(long long)arg1 ;
-(long long)priorityLevel;
-(void)setNotes:(id)arg1 ;
-(UIColor *)calendarColor;
-(void)setCalendarColor:(UIColor *)arg1 ;
-(void)setupConstraints;
-(NSDictionary *)titleAttributes;
-(void)updateMarginConstraints;
@end
