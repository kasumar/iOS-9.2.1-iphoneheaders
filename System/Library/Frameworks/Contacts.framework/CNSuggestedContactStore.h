/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@class SGSuggestionsService;

@interface CNSuggestedContactStore : CNContactStore {

	SGSuggestionsService* _suggestionService;

}

@property (nonatomic,retain) SGSuggestionsService * suggestionService;              //@synthesize suggestionService=_suggestionService - In the implementation block
+(void)initialize;
+(BOOL)isSuggestionsSupported;
+(id)storeInfoClasses;
+(id)storeIdentifier;
-(void)dealloc;
-(id)init;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithSuggestionsService:(id)arg1 ;
-(BOOL)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(SGSuggestionsService *)suggestionService;
-(void)setSuggestionService:(SGSuggestionsService *)arg1 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
@end

