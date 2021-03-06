/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMF/FMF-Structs.h>
@class NSString, ACAccountStore;

@interface Common : NSObject {

	BOOL _accountInfoLoaded;
	BOOL _isRenewingAccountCredentials;
	BOOL _isTokenAccessible;
	BOOL _isAccountPresent;
	NSString* _personID;
	NSString* _appToken;
	NSString* _fmfHost;
	NSString* _username;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * personID;                          //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * appToken;                          //@synthesize appToken=_appToken - In the implementation block
@property (nonatomic,retain) NSString * fmfHost;                             //@synthesize fmfHost=_fmfHost - In the implementation block
@property (nonatomic,readonly) NSString * redirectedHost; 
@property (assign,nonatomic) BOOL accountInfoLoaded;                         //@synthesize accountInfoLoaded=_accountInfoLoaded - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL isRenewingAccountCredentials;              //@synthesize isRenewingAccountCredentials=_isRenewingAccountCredentials - In the implementation block
@property (assign,nonatomic) BOOL isTokenAccessible;                         //@synthesize isTokenAccessible=_isTokenAccessible - In the implementation block
@property (assign,nonatomic) BOOL isAccountPresent;                          //@synthesize isAccountPresent=_isAccountPresent - In the implementation block
+(id)sharedInstance;
-(BOOL)isRenewingAccountCredentials;
-(void)flushRedirection;
-(BOOL)isFMFAllowed;
-(BOOL)tokenIsNotAccessible;
-(BOOL)hasFMFUser;
-(void)clearFMFAccount;
-(id)handlesForSAPerson:(id)arg1 ;
-(BOOL)accountInfoLoaded;
-(BOOL)isHandleEmail:(id)arg1 ;
-(id)completeNumberForPhoneNumber:(id)arg1 ;
-(NSString *)redirectedHost;
-(void)loadAccountInfo;
-(void)setIsTokenAccessible:(BOOL)arg1 ;
-(void)setAccountInfoLoaded:(BOOL)arg1 ;
-(id)gestaltQuery:(CFStringRef)arg1 ;
-(void)setIsAccountPresent:(BOOL)arg1 ;
-(BOOL)isTokenAccessible;
-(BOOL)gestaltQueryBool:(CFStringRef)arg1 ;
-(void)setIsRenewingAccountCredentials:(BOOL)arg1 ;
-(void)setFmfHost:(NSString *)arg1 ;
-(BOOL)isAppRestricted;
-(void)redirected:(id)arg1 ;
-(BOOL)isAccountPresent;
-(NSString *)fmfHost;
-(void)dealloc;
-(id)init;
-(id)buildVersion;
-(id)osVersion;
-(NSString *)personID;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)username;
-(id)deviceUDID;
-(void)setupLogging;
-(id)productType;
-(NSString *)appToken;
@end

