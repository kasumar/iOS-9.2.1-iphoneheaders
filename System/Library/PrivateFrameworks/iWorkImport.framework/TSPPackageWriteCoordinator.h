/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchiverManagerDelegate.h>
#import <iWorkImport/TSPComponentWriterDelegate.h>
#import <iWorkImport/TSPDataArchiver.h>
#import <iWorkImport/TSPExternalReferenceDelegate.h>
#import <iWorkImport/TSPPersistedObjectUUIDMapDelegate.h>
#import <iWorkImport/TSPObjectModifyDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSURL, TSPObjectContext, TSPDocumentRevision, TSPObject, TSPDataAttributesSnapshot, TSPArchiverManager, NSObject, TSUPathSet, TSPObjectContainer, TSPPersistedObjectUUIDMap, NSHashTable, TSPComponentExternalReferenceMap, NSMutableArray, TSPPackageMetadata, NSString;

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate> {

	TSPObjectContext* _context;
	unsigned char _packageIdentifier;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _fileFormatVersion;
	unsigned long long _saveToken;
	long long _preferredPackageType;
	TSPObject* _metadataObject;
	TSPDataAttributesSnapshot* _dataAttributesSnapshot;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_group> _completionGroup;
	hash_map<const long long, TSP::ComponentPropertiesSnapshot, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot> > >* _componentPropertiesSnapshot;
	NSObject*<OS_dispatch_queue> _componentQueue;
	hash_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > >* _writtenComponents;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _skippedComponents;
	map<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > > > >* _remainingComponentsQueue;
	TSUPathSet* _packageLocatorPathSet;
	TSPObjectContainer* _objectContainer;
	BOOL _didWriteObjectContainer;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	NSObject*<OS_dispatch_queue> _modifyObjectQueue;
	NSHashTable* _modifiedObjectsDuringWrite;
	BOOL _captureSnapshots;
	NSObject*<OS_dispatch_queue> _externalLazyReferencesQueue;
	TSPComponentExternalReferenceMap* _externalLazyReferencesMap;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	hash_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > >* _writtenObjects;
	queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo> > >* _writtenLazyReferences;
	NSObject*<OS_dispatch_queue> _externalReferenceQueue;
	NSMutableArray* _externalReferenceBlocks;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSHashTable* _referencedDatas;
	NSMutableArray* _dataFinalizeHandlers;
	BOOL _writeSuccess;
	BOOL _isRecoverableError;
	BOOL _isCancelled;
	BOOL _didWriteRootObject;
	BOOL _didWriteMetadata;
	NSURL* _documentTargetURL;
	NSURL* _relativeURLForExternalData;
	TSPPackageMetadata* _packageMetadata;

}

@property (nonatomic,readonly) TSPPackageMetadata * packageMetadata;              //@synthesize packageMetadata=_packageMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;                //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
-(id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 ;
-(NSURL *)relativeURLForExternalData;
-(unsigned long long)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id*)arg4 ;
-(void)stopCapturingSnapshots;
-(void)enumerateWrittenObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg1 packageURL:(id)arg2 ;
-(id)objectForIdentifier:(long long)arg1 ;
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 shouldCaptureSnapshot:(BOOL)arg3 ;
-(void)didReferenceData:(id)arg1 ;
-(id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 ;
-(id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 captureSnapshots:(BOOL)arg10 ;
-(BOOL)shouldArchiveComponent:(id)arg1 ;
-(void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2 ;
-(void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeRemainingRootObjectsAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueRootObject:(id)arg1 forceArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueRootObjectImpl:(id)arg1 forceArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(BOOL)arg3 ;
-(BOOL)isComponentPersisted:(id)arg1 ;
-(BOOL)shouldEnqueueComponent:(id)arg1 ;
-(id)objectContainerImpl;
-(void)nextComponentAndRootObjectForComponentWriteWithCompletion:(/*^block*/id)arg1 ;
-(void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(BOOL)arg3 withPackageWriter:(id)arg4 ;
-(BOOL)shouldArchiveComponent:(id)arg1 checkForceArchive:(BOOL)arg2 ;
-(void)archiveComponent:(id)arg1 locator:(id)arg2 storeOutsideObjectArchive:(BOOL)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5 ;
-(void)copyComponent:(id)arg1 locator:(id)arg2 packageWriter:(id)arg3 ;
-(void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5 ;
-(void)setArchivedObjects:(id)arg1 componentObjectUUIDMap:(id)arg2 externalStrongReferences:(id)arg3 externalWeakReferences:(id)arg4 readVersion:(unsigned long long)arg5 writeVersion:(unsigned long long)arg6 dataReferences:(id)arg7 forComponent:(id)arg8 ;
-(BOOL)shouldLinkComponentOfObject:(id)arg1 ;
-(void)updateExternalReferencesForLinkedComponent:(id)arg1 ;
-(BOOL)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2 ;
-(id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 isInComponentQueue:(BOOL)arg4 hasArchiverAccessLock:(BOOL)arg5 ;
-(void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 claimingComponent:(id)arg3 assertOnFailure:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isComponentExternal:(id)arg1 wasWritten:(BOOL*)arg2 wasCopied:(BOOL*)arg3 ;
-(void)calculateExternalReferences;
-(id)objectContainer;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(BOOL)arg5 ;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)componentWriterNeedsDocumentRecovery:(id)arg1 ;
-(void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/id)arg1 ;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 ;
-(BOOL)didWriteObject:(id)arg1 claimingComponent:(id*)arg2 ;
-(BOOL)didWriteComponent:(id)arg1 wasCopied:(BOOL*)arg2 ;
-(BOOL)didWriteData:(id)arg1 ;
-(TSPPackageMetadata *)packageMetadata;
-(void)dealloc;
-(id)init;
@end

