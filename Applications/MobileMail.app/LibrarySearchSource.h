/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>
#import <MobileMail/SearchManagerDelegate.h>
#import <MobileMail/MiniMallSearchWrapper.h>

@protocol OS_dispatch_queue;
@class MFMailMessageLibrary, NSString, NSMutableSet, MessageToMailboxUidCache, NSObject, NSArray, SearchManager, NSNumber, SourceSearchContext, MFMessageCriterion;

@interface LibrarySearchSource : GenericSource <SearchManagerDelegate, MiniMallSearchWrapper> {

	MFMailMessageLibrary* _library;
	NSString* _uniqueID;
	NSMutableSet* _messages;
	MessageToMailboxUidCache* _mailboxCache;
	CFDictionaryRef _messageCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _primarySources;
	SearchManager* _searchManager;
	NSNumber* _searchIdentifier;
	SourceSearchContext* _searchContext;
	MFMessageCriterion* _baseCriterion;
	unsigned _isProtectedDataAvailable : 1;
	unsigned _shouldThread : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isProtectedDataAvailable) BOOL protectedDataAvailable; 
@property (getter=isSearching,readonly) BOOL searching; 
-(id)mailboxUids;
-(BOOL)representsMailboxUid:(id)arg1 ;
-(BOOL)supportsSearch;
-(BOOL)supportsDeleteAll;
-(BOOL)supportsDeleteAllAcrossSources;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMoveAll;
-(BOOL)supportsMoveAllAcrossSources;
-(BOOL)supportsMarkAll;
-(BOOL)shouldCompactOnFetch;
-(id)uniqueIDForStorage;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(id)initWithLibrary:(id)arg1 primarySources:(id)arg2 ;
-(void)reloadPreferences;
-(void)_messagesAdded:(id)arg1 ;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(BOOL)canLoadOlderMessages;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)noMessagesLabelText;
-(id)searchForMessagesUsingSearchContext:(id)arg1 ;
-(id)copyMessageInfos;
-(id)uniqueIDForStatus;
-(BOOL)supportsFlagging;
-(BOOL)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(BOOL)supportsArchivingForMessageInfos:(id)arg1 ;
-(BOOL)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(BOOL)shouldThreadConversations;
-(BOOL)shouldPlayNewMailSound;
-(id)mailboxSourcesForMessageInfos:(id)arg1 ;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(void)_messagesWereCompacted:(id)arg1 ;
-(id)_baseCriterionFromSources:(id)arg1 ;
-(id)_copyMessageInfosFromMessages:(id)arg1 ;
-(id)_applyCriterion:(id)arg1 toMessages:(id)arg2 ;
-(void)_cancelSearchWithIdentifier:(id)arg1 ;
-(void)_notifyMallWithAddedMessages:(id)arg1 modified:(id)arg2 removedMessages:(id)arg3 group:(id)arg4 ;
-(void)_addMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_notifyMallSearchFinished;
-(void)_purgeCachedMessages:(id)arg1 ;
-(void)_cacheMessages:(id)arg1 ;
-(id)_nts_unknownMessagesFromArray:(id)arg1 ;
-(id)_nts_knownMessagesFromArray:(id)arg1 ;
-(void)_updateMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_nts_effectiveCriterion;
-(void)_queue_filterInMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_queue_updateMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_removeMessages:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_copyPrimarySources;
-(id)_sourceForMessageInfo:(id)arg1 sources:(id)arg2 ;
-(void)searchManager:(id)arg1 foundMessages:(id)arg2 keepExistingMessages:(BOOL)arg3 forSearchWithIdentifier:(id)arg4 shouldWait:(BOOL)arg5 ;
-(void)searchManager:(id)arg1 finishedSearchWithIdentifier:(id)arg2 ;
-(/*function pointer*/void*)comparator;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isProtectedDataAvailable;
-(void)close;
-(unsigned long long)messageCount;
-(void)open;
-(void)applyChanges;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(BOOL)canFetchSearchResults;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(BOOL)isSearching;
-(void)flushCaches;
-(id)diagnosticDescription;
@end

