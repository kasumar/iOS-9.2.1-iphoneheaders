/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAAnswerObject : SADomainObject

@property (nonatomic,copy) NSArray * lines; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

