/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDSource.h>

@interface CFPDContainerSource : CFPDSource {

	CFStringRef _containerPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 container:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 ;
-(CFStringRef)container;
@end

