/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailboxContentTableEntry <NSObject>
@required
-(void)setHighlightedTerms:(id)arg1;
-(void)setShowsBestMatchedAddress:(BOOL)arg1;
-(void)setMessage:(id)arg1 threaded:(BOOL)arg2;
-(void)setHasUnreadMessages:(BOOL)arg1 hasAttachments:(BOOL)arg2 hasFlagged:(BOOL)arg3 hasVIP:(BOOL)arg4 hasNotify:(BOOL)arg5 hasMute:(BOOL)arg6 receivedInterval:(double)arg7;
-(void)updateFlagsFromMessage:(id)arg1;
-(void)setMailboxName:(id)arg1;

@end
