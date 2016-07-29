/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface _UITraitStorage : NSObject <NSCoding> {

	NSMutableArray* _records;
	NSString* _keyPath;
	id _object;

}

@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) id object;                //@synthesize object=_object - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(NSString *)keyPath;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
-(id)records;
-(void)addRecord:(id)arg1 ;
@end
