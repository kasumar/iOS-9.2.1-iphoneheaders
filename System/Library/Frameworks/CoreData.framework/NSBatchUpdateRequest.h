/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSPredicate, NSDictionary, NSString, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	id _entity;
	NSPredicate* _predicate;
	struct {
		unsigned includesSubentities : 1;
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned _RESERVED : 28;
	}  _flags;
	NSDictionary* _columnsToUpdate;

}

@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity;                  //@synthesize entity=_entity - In the implementation block
@property (retain) NSPredicate * predicate;                         //@synthesize predicate=_predicate - In the implementation block
@property (assign) BOOL includesSubentities; 
@property (assign) unsigned long long resultType; 
@property (copy) NSDictionary * propertiesToUpdate;                 //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchUpdateRequestWithEntityName:(id)arg1 ;
-(BOOL)includesSubentities;
-(id)initWithEntity:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_setValidatedPropertiesToUpdate:(id)arg1 ;
-(NSDictionary *)propertiesToUpdate;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSEntityDescription *)entity;
-(NSString *)entityName;
-(id)initWithEntityName:(id)arg1 ;
-(void)setPropertiesToUpdate:(NSDictionary *)arg1 ;
-(unsigned long long)resultType;
-(void)setResultType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(void)setIncludesSubentities:(BOOL)arg1 ;
@end

