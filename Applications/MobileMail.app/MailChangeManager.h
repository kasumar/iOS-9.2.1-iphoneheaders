/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFConditionLock, NSMutableArray, MCSChange, MFInvocationQueue, MailboxHierarchyTree, NSUndoManager, NSString;

@interface MailChangeManager : NSObject <MFDiagnosticsGenerator> {

	MFConditionLock* _processingLock;
	NSMutableArray* _pendingChanges;
	NSMutableArray* _committedChanges;
	MCSChange* _currentChange;
	MFInvocationQueue* _invocationQueue;
	MailboxHierarchyTree* _lastCalculatedMailboxTree;
	NSUndoManager* _undoManager;
	BOOL _isUndoing;
	CFDictionaryRef _mailboxPreChangeUnreadCounts;
	CFDictionaryRef _mailboxPostChangeUnreadCounts;

}

@property (readonly) NSUndoManager * undoManager;                   //@synthesize undoManager=_undoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedChangeManager;
-(id)allMailboxUidsSortedWithSpecialsAtTopForAccount:(id)arg1 includingLocals:(BOOL)arg2 client:(id)arg3 outbox:(id)arg4 ;
-(unsigned long long)unreadCountForMailboxes:(id)arg1 ;
-(id)displayNameUsingSpecialNamesForMailbox:(id)arg1 ;
-(id)applyPendingChangesToMessages:(id)arg1 ;
-(void)purgeCommittedChanges;
-(unsigned long long)unreadCountForSources:(id)arg1 ;
-(id)applyPendingChangesToMessageInfos:(id)arg1 ;
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)_mailMessageStoreMessagesCompacted:(id)arg1 ;
-(void)_invalidateUnreadCountsForKey:(id)arg1 onlyPostChange:(BOOL)arg2 ;
-(void)_revertCommittedChange:(id)arg1 ;
-(id)applyCommittedChanges:(id)arg1 toObjects:(id)arg2 ;
-(id)applyPendingChangesToObjects:(id)arg1 ;
-(unsigned long long)_serverUnreadCountForMailbox:(id)arg1 ;
-(void)_updateUnreadCountForMailbox:(id)arg1 ;
-(unsigned long long)_unreadCountAfterChangesForMailbox:(id)arg1 withKey:(id)arg2 criteria:(id)arg3 ;
-(unsigned long long)unreadCountForMailboxes:(id)arg1 criteria:(id)arg2 ;
-(unsigned long long)unreadCountForMailbox:(id)arg1 criteria:(id)arg2 ;
-(unsigned long long)_serverUnreadOnlyOnServerCountForMailboxes:(id)arg1 ;
-(unsigned long long)unreadCountForSource:(id)arg1 ;
-(void)_modifyMailboxesForMailboxTree:(id)arg1 forChange:(id)arg2 ;
-(id)genericMailboxUidsSortedForAccount:(id)arg1 includingLocals:(BOOL)arg2 excludingMailbox:(id)arg3 ;
-(void)addChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSUndoManager *)undoManager;
-(void)resume;
-(void)pause;
-(void)processPendingChanges;
-(id)copyDiagnosticInformation;
-(unsigned long long)unreadCountForMailbox:(id)arg1 ;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(BOOL)mailboxHasSubMailboxes:(id)arg1 ;
@end
