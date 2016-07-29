/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFDiskCacheUtilities : NSObject
+(id)_pathsForContentWithType:(unsigned long long)arg1 ;
+(void)_enumerateContentsForAccounts:(id)arg1 withType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)_enumerateContentPathsAndAttributes:(/*^block*/id)arg1 ;
+(void)_enumeratePurgableContentsWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
+(unsigned long long)deletePlaceholderAttachmentsWithCreationDateOver:(long long)arg1 ;
+(id)systemSpaceWithError:(id*)arg1 ;
+(id)mailSpaceWithError:(id*)arg1 ;
+(unsigned long long)deletableMailSpaceWithCreationDateOver:(long long)arg1 ;
+(unsigned long long)deleteContentWithCreationDateOver:(long long)arg1 withTarget:(unsigned long long)arg2 ;
+(unsigned long long)deletePlaceholderAttachments;
+(void)deleteLocalAttachments;
+(void)deleteLocalMessages;
@end
