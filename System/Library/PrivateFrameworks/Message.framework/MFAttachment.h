/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol MFDataConsumer;
@class NSURL, NSString, NSMutableDictionary, MFAttachmentManager, MFAttachmentPlaceholder, NSProgress, MFMimePart, MFMailDropMetadata;

@interface MFAttachment : NSObject <QLPreviewItem> {

	NSMutableDictionary* _metadata;
	MFAttachmentManager* _attachmentManager;
	BOOL _isDataAvailableLocally;
	MFAttachmentPlaceholder* _placeholder;
	NSProgress* _downloadProgress;
	BOOL _isUserFacing;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	unsigned long long _progressInterval;
	double _progressTimeInterval;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id _fetchProgressBlock;
	id<MFDataConsumer> _customConsumer;
	unsigned long long _lastProgressBytes;
	double _lastProgressTime;

}

@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions; 
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                    //@synthesize part=_part - In the implementation block
@property (readonly) NSString * contentID; 
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                 //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive; 
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) MFMailDropMetadata * mailDropMetadata; 
@property (nonatomic,readonly) NSProgress * downloadProgress; 
@property (nonatomic,copy) NSString * originalCID; 
@property (assign,nonatomic) unsigned long long progressInterval;                  //@synthesize progressInterval=_progressInterval - In the implementation block
@property (assign,nonatomic) double progressTimeInterval;                          //@synthesize progressTimeInterval=_progressTimeInterval - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (copy) id fetchProgressBlock;                                            //@synthesize fetchProgressBlock=_fetchProgressBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL isUserFacing;                                    //@synthesize isUserFacing=_isUserFacing - In the implementation block
@property (assign,nonatomic) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (assign,nonatomic) unsigned long long lastProgressBytes;                 //@synthesize lastProgressBytes=_lastProgressBytes - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)passPlaceholder;
-(BOOL)isPass;
-(id)passWithError:(id*)arg1 ;
-(id)pass;
-(id)contentType;
-(id)className;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(BOOL)isDisplayableImage;
-(CGSize)markupSizeForImageScale:(unsigned long long)arg1 ;
-(BOOL)isDisplayableInline;
-(BOOL)isPDFFile;
-(unsigned long long)imageScalingFlags;
-(void)enqueueScaleAttachmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)scaledFileSize;
-(id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2 attachmentContextID:(id)arg3 ;
-(id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 useEdgeToEdgeFormattingIfApplicable:(BOOL)arg4 ;
-(NSString *)meetingStorePersistentID;
-(BOOL)isCalendarFile;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2 ;
-(unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1 ;
-(id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1 ;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)_isContentTypeDisplayableByMobileMail;
-(BOOL)isMedia;
-(CGSize)imageDimensionsWithData:(id)arg1 ;
-(double)constrainedWidth;
-(id)_imageScalingKeyForImageScale:(unsigned long long)arg1 ;
-(unsigned long long)_imageScale;
-(void)_setImageScale:(unsigned long long)arg1 ;
-(BOOL)isDisplayableByWebKit;
-(BOOL)isRestrictedMIMEType;
-(BOOL)isContentOpenable;
-(BOOL)isDisplayableInlineWithData:(id)arg1 ;
-(BOOL)hasCalendarMetadata;
-(NSString *)eventID;
-(NSString *)icsRepresentation;
-(BOOL)isContentCompressed;
-(void)compressContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)decompressContentsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRFC822;
-(BOOL)isDisplayableInsidePlugin;
-(void)cancel;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)path;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)mimeType;
-(MFAttachmentPlaceholder *)placeholder;
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(id)fileURL;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDisposition:(NSString *)arg1 ;
-(BOOL)isAutoArchive;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(id)readFromDisk;
-(id<MFDataConsumer>)customConsumer;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(BOOL)isUserFacing;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(id)fetchProgressBlock;
-(id)fetchCompletionBlock;
-(void)setFetchProgressBlock:(id)arg1 ;
-(void)setIsUserFacing:(BOOL)arg1 ;
-(BOOL)isContainedInRFC822;
-(void)setProgressTimeInterval:(double)arg1 ;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)_dataProvider;
-(id)filterData:(id)arg1 ;
-(void)fetchDataWithCompletion:(/*^block*/id)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(void)setMailDropMetadata:(MFMailDropMetadata *)arg1 ;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(BOOL)isCached;
-(NSString *)fileUTType;
-(unsigned long long)sizeOnDisk;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(BOOL)contentTypeConformsToEventICS;
-(BOOL)conformsToType:(id)arg1 ;
-(id)fetchDataToURL:(id*)arg1 ;
-(BOOL)isMailDropPhotoArchive;
-(id)filterICSData:(id)arg1 ;
-(BOOL)shouldAutoDownload;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(unsigned long long)progressInterval;
-(void)setProgressInterval:(unsigned long long)arg1 ;
-(double)progressTimeInterval;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(unsigned long long)lastProgressBytes;
-(void)setLastProgressBytes:(unsigned long long)arg1 ;
-(double)lastProgressTime;
-(void)setLastProgressTime:(double)arg1 ;
-(void)fetchDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)contentTypeConformsToMarkup;
-(NSString *)contentID;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(MFMailDropMetadata *)mailDropMetadata;
-(id)metadataValueForKey:(id)arg1 ;
-(BOOL)isDataAvailableLocally;
-(id)fetchLocalData;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)fetchData;
-(unsigned long long)decodedFileSize;
-(BOOL)isMailDrop;
-(unsigned long long)encodedFileSize;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(NSString *)originalCID;
-(void)setOriginalCID:(NSString *)arg1 ;
-(NSString *)inferredMimeType;
-(BOOL)isImageFile;
-(NSString *)disposition;
-(BOOL)contentTypeConformsToPassbook;
-(NSProgress *)downloadProgress;
-(BOOL)isPlaceholder;
-(BOOL)isAvailable;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)fileAttributes;
-(void)setPart:(MFMimePart *)arg1 ;
-(MFMimePart *)part;
@end

