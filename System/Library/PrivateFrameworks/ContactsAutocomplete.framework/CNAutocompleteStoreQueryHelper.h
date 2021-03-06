/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteSearchProvider, CNAutocompleteFetchDelegate, CNScheduler, CNAutocompleteProbeProvider;
@class CNAutocompleteUserSession;

@interface CNAutocompleteStoreQueryHelper : NSObject {

	id<CNAutocompleteSearchProvider> _searchProvider;
	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNScheduler> _scheduler;
	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteUserSession* _userSession;

}

@property (nonatomic,readonly) id<CNAutocompleteSearchProvider> searchProvider;              //@synthesize searchProvider=_searchProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,readonly) CNAutocompleteUserSession * userSession;                      //@synthesize userSession=_userSession - In the implementation block
-(id<CNAutocompleteFetchDelegate>)delegate;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5 ;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(CNAutocompleteUserSession *)userSession;
-(id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3 ;
-(id<CNScheduler>)scheduler;
@end

