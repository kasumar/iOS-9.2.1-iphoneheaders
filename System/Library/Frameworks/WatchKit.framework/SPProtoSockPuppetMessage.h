/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoAudioFilePlayerMessage, SPProtoSockPuppetPlist;

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying> {

	SPProtoAudioFilePlayerMessage* _audioFilePlayerMessage;
	SPProtoSockPuppetPlist* _plist;

}

@property (nonatomic,readonly) BOOL hasPlist; 
@property (nonatomic,retain) SPProtoSockPuppetPlist * plist;                                      //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioFilePlayerMessage; 
@property (nonatomic,retain) SPProtoAudioFilePlayerMessage * audioFilePlayerMessage;              //@synthesize audioFilePlayerMessage=_audioFilePlayerMessage - In the implementation block
+(id)sockPuppetMessageWithSubMessage:(id)arg1 setterSelector:(SEL)arg2 ;
-(void)setPlist:(SPProtoSockPuppetPlist *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAudioFilePlayerMessage:(SPProtoAudioFilePlayerMessage *)arg1 ;
-(BOOL)hasPlist;
-(BOOL)hasAudioFilePlayerMessage;
-(SPProtoAudioFilePlayerMessage *)audioFilePlayerMessage;
-(SPProtoSockPuppetPlist *)plist;
-(BOOL)readFrom:(id)arg1 ;
@end
