/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFApplicationSceneDelegate <NSObject>
@optional
-(void)applicationSceneController:(id)arg1 didMakeViewControllerActive:(UIViewController*)arg2;
-(void)applicationSceneController:(id)arg1 didWithdrawActiveViewController:(UIViewController*)arg2;
-(void)applicationSceneController:(id)arg1 didCloseViewController:(UIViewController*)arg2;
-(void)applicationSceneController:(id)arg1 didClosePurgedViewControllerWithResurrectionIdentifier:(id)arg2;
-(double)applicationSceneController:(id)arg1 preferredWidthForViewController:(UIViewController*)arg2;
-(void)applicationSceneControllerWillBeginFlushingRestorableStateToDisk:(id)arg1;
-(void)applicationSceneController:(id)arg1 didFinishFlushingRestorableStateToDiskWithError:(id)arg2;
-(BOOL)shouldPurgeActorViewController:(UIViewController*)arg1;
-(id)resurrectionIdentifierForPurgingActorViewController:(UIViewController*)arg1;
-(void)applicationSceneController:(id)arg1 didPurgeActorViewControllerWithResurrectionIdentifier:(id)arg2;
-(UIViewController*)actorViewControllerForResurrectionIdentifier:(id)arg1;
-(id)dummyViewWithFrame:(CGRect)arg1 forResurrectionIdentifier:(id)arg2;

@end
