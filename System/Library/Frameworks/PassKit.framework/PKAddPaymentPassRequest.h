/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding> {

	NSData* _encryptedPassData;
	NSData* _activationData;
	NSData* _ephemeralPublicKey;
	NSData* _wrappedKey;
	NSString* _encryptionVersion;
	NSData* _publicKeyHash;
	NSString* _issuerIdentifier;
	NSString* _hostApplicationIdentifier;
	NSString* _hostApplicationVersion;
	NSData* _FPInfo;

}

@property (nonatomic,copy) NSData * encryptedPassData;                        //@synthesize encryptedPassData=_encryptedPassData - In the implementation block
@property (nonatomic,copy) NSData * activationData;                           //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                       //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * wrappedKey;                               //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,copy) NSString * encryptionVersion;                      //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                            //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                       //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationVersion;                 //@synthesize hostApplicationVersion=_hostApplicationVersion - In the implementation block
@property (nonatomic,copy) NSData * FPInfo;                                   //@synthesize FPInfo=_FPInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(NSString *)issuerIdentifier;
-(BOOL)_hasRequiredThirdPartyFields:(BOOL)arg1 ;
-(BOOL)_hasRequiredFields:(BOOL)arg1 ;
-(NSData *)encryptedPassData;
-(void)setEncryptedPassData:(NSData *)arg1 ;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKey;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
-(NSString *)encryptionVersion;
-(void)setEncryptionVersion:(NSString *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationVersion;
-(void)setHostApplicationVersion:(NSString *)arg1 ;
-(NSData *)FPInfo;
-(void)setFPInfo:(NSData *)arg1 ;
@end

