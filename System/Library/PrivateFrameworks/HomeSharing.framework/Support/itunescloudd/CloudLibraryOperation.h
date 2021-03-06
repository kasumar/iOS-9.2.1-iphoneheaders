/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CloudLibraryConnection, NSString, NSError;

@interface CloudLibraryOperation : NSOperation <NSCoding> {

	BOOL _persistent;
	CloudLibraryConnection* _connection;
	NSString* _libraryIdentifier;
	long long _status;
	NSError* _error;

}

@property (nonatomic,retain) CloudLibraryConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * libraryIdentifier;                         //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent;              //@synthesize persistent=_persistent - In the implementation block
@property (assign,nonatomic) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(void)setLibraryIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPersistent;
-(CloudLibraryConnection *)connection;
-(void)setConnection:(CloudLibraryConnection *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSString *)libraryIdentifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

