/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end

