/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSWorkspaceClientDelegate <NSObject>
@required
-(void)clientSystemApplicationTerminated:(id)arg1;
-(void)clientBeginTransaction:(id)arg1;
-(void)clientEndTransaction:(id)arg1;
-(void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)client:(id)arg1 handleActions:(id)arg2;

@end

