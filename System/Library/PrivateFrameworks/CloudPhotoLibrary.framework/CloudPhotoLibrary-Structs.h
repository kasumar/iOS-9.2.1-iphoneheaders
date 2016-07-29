/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	long long batches;
	long long errors;
	long long assets;
	long long masters;
	long long retries;
	long long bytesCount;
	long long resourcesCount;
} SCD_Struct_CP4;

typedef struct {
	long long setupErrors;
	long long pushErrors;
	long long pullErrors;
	long long managementErrors;
} SCD_Struct_CP5;

typedef struct {
	long long period;
	SCD_Struct_CP4 upstream;
	SCD_Struct_CP4 downstream;
	SCD_Struct_CP5 syncerrors;
} SCD_Struct_CP6;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CP7;
