/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PASampleAggregatorOptions : NSObject {

	BOOL _headerOnly;
	BOOL _tabDelineateBinaryImageSections;
	BOOL _binaryImagesBeforeStacks;
	BOOL _printSpinSignatureStack;
	BOOL _printHeavyStacks;
	BOOL _displayFrameAddresses;
	BOOL _displaySub1MsCpuTime;
	BOOL _displayStateChangesOnIdleThreads;
	BOOL _displayProcessFirstLastTimes;
	BOOL _displayOffsetsFromUnnamedSymbols;
	BOOL _displaySymbolInformation;
	BOOL _displayBinaryImageAddresses;
	BOOL _displayBinaryImagesLackingNameOrPath;
	BOOL _displayRunnableThreads;
	BOOL _displayBlockedThreads;
	BOOL _displayIdleWorkQueueThreads;

}

@property (assign) BOOL headerOnly;                                        //@synthesize headerOnly=_headerOnly - In the implementation block
@property (assign) BOOL tabDelineateBinaryImageSections;                   //@synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections - In the implementation block
@property (assign) BOOL binaryImagesBeforeStacks;                          //@synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks - In the implementation block
@property (assign) BOOL printSpinSignatureStack;                           //@synthesize printSpinSignatureStack=_printSpinSignatureStack - In the implementation block
@property (assign) BOOL printHeavyStacks;                                  //@synthesize printHeavyStacks=_printHeavyStacks - In the implementation block
@property (assign) BOOL displayFrameAddresses;                             //@synthesize displayFrameAddresses=_displayFrameAddresses - In the implementation block
@property (assign) BOOL displaySub1MsCpuTime;                              //@synthesize displaySub1MsCpuTime=_displaySub1MsCpuTime - In the implementation block
@property (assign) BOOL displayStateChangesOnIdleThreads;                  //@synthesize displayStateChangesOnIdleThreads=_displayStateChangesOnIdleThreads - In the implementation block
@property (assign) BOOL displayProcessFirstLastTimes;                      //@synthesize displayProcessFirstLastTimes=_displayProcessFirstLastTimes - In the implementation block
@property (assign) BOOL displayOffsetsFromUnnamedSymbols;                  //@synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols - In the implementation block
@property (assign) BOOL displaySymbolInformation;                          //@synthesize displaySymbolInformation=_displaySymbolInformation - In the implementation block
@property (assign) BOOL displayBinaryImageAddresses;                       //@synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses - In the implementation block
@property (assign) BOOL displayBinaryImagesLackingNameOrPath;              //@synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath - In the implementation block
@property (assign) BOOL displayRunnableThreads;                            //@synthesize displayRunnableThreads=_displayRunnableThreads - In the implementation block
@property (assign) BOOL displayBlockedThreads;                             //@synthesize displayBlockedThreads=_displayBlockedThreads - In the implementation block
@property (assign) BOOL displayIdleWorkQueueThreads;                       //@synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads - In the implementation block
@property (assign) BOOL verbose; 
-(id)init;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(BOOL)displayFrameAddresses;
-(BOOL)displayStateChangesOnIdleThreads;
-(BOOL)displaySub1MsCpuTime;
-(BOOL)displayProcessFirstLastTimes;
-(BOOL)displayOffsetsFromUnnamedSymbols;
-(BOOL)displaySymbolInformation;
-(BOOL)displayBinaryImageAddresses;
-(BOOL)displayBinaryImagesLackingNameOrPath;
-(BOOL)displayBlockedThreads;
-(BOOL)displayIdleWorkQueueThreads;
-(void)setDisplayFrameAddresses:(BOOL)arg1 ;
-(void)setDisplayStateChangesOnIdleThreads:(BOOL)arg1 ;
-(void)setDisplaySub1MsCpuTime:(BOOL)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(BOOL)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(BOOL)arg1 ;
-(void)setDisplaySymbolInformation:(BOOL)arg1 ;
-(void)setDisplayBinaryImageAddresses:(BOOL)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(BOOL)arg1 ;
-(void)setDisplayBlockedThreads:(BOOL)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(BOOL)arg1 ;
-(BOOL)headerOnly;
-(void)setHeaderOnly:(BOOL)arg1 ;
-(BOOL)tabDelineateBinaryImageSections;
-(void)setTabDelineateBinaryImageSections:(BOOL)arg1 ;
-(BOOL)binaryImagesBeforeStacks;
-(void)setBinaryImagesBeforeStacks:(BOOL)arg1 ;
-(BOOL)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(BOOL)printHeavyStacks;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(BOOL)displayRunnableThreads;
-(void)setDisplayRunnableThreads:(BOOL)arg1 ;
@end

