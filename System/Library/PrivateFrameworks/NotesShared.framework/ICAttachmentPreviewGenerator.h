/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICProgressIndicatorTrackerDelegate.h>

@class NSOperationQueue, NSMutableSet, ICProgressIndicatorTracker, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {

	BOOL _delayPreviewGeneration;
	NSOperationQueue* _asyncGeneratorQueue;
	NSOperationQueue* _costlyGeneratorQueue;
	NSOperationQueue* _generatorQueue;
	NSMutableSet* _attachmentsToRetry;
	ICProgressIndicatorTracker* _progressTracker;

}

@property (assign,nonatomic) BOOL delayPreviewGeneration;                               //@synthesize delayPreviewGeneration=_delayPreviewGeneration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * asyncGeneratorQueue;                    //@synthesize asyncGeneratorQueue=_asyncGeneratorQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * costlyGeneratorQueue;                   //@synthesize costlyGeneratorQueue=_costlyGeneratorQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * generatorQueue;                         //@synthesize generatorQueue=_generatorQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentsToRetry;                         //@synthesize attachmentsToRetry=_attachmentsToRetry - In the implementation block
@property (nonatomic,retain) ICProgressIndicatorTracker * progressTracker;              //@synthesize progressTracker=_progressTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGenerator;
-(void)dealloc;
-(id)init;
-(void)generatePreviewsIfNeeded;
-(void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1 ;
-(void)generatePreviewIfNeededForAttachment:(id)arg1 ;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)setupAttachmentPreviewGeneratorObservers;
-(NSOperationQueue *)costlyGeneratorQueue;
-(BOOL)isPreviewGenerationSupported;
-(BOOL)delayPreviewGeneration;
-(NSMutableSet *)attachmentsToRetry;
-(NSOperationQueue *)asyncGeneratorQueue;
-(NSOperationQueue *)generatorQueue;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(void)cancelAttachmentPreviewGeneration;
-(void)setDelayPreviewGeneration:(BOOL)arg1 ;
-(void)setAsyncGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setCostlyGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setGeneratorQueue:(NSOperationQueue *)arg1 ;
-(void)setAttachmentsToRetry:(NSMutableSet *)arg1 ;
-(ICProgressIndicatorTracker *)progressTracker;
-(void)setProgressTracker:(ICProgressIndicatorTracker *)arg1 ;
@end
