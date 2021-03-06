/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator {

	BOOL _negate;
	unsigned long long _options;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(BOOL)isNegation;
-(void)setNegation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
@end

