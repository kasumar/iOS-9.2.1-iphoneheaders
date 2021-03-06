/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectPunchOut.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandPunchOut : SADomainObjectPunchOut <ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(id)_displayIdentifier;
-(id)validateIdentifier;
-(id)_punchOutWithServiceHelper:(id)arg1 ;
-(id)_abURLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)_validate;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

