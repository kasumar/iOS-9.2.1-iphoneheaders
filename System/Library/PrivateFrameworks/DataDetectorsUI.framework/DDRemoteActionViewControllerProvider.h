/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DDRemoteActionContext;

@interface DDRemoteActionViewControllerProvider : NSObject {

	DDRemoteActionContext* _actionContext;

}

@property (readonly) DDRemoteActionContext * actionContext;              //@synthesize actionContext=_actionContext - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)createViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(DDRemoteActionContext *)actionContext;
@end

