/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFAtomTextViewDelegate <NSObject>
@optional
-(void)atomTextViewDidChangeSelection:(id)arg1;
-(id)supportedPasteboardTypesForAtomTextView:(id)arg1;
-(id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
-(BOOL)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;

@required
-(id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;

@end

