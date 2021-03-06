/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKLabelTile : VKTile {

	shared_ptr<vk::LabelTile>* _labelTile;

}

@property (nonatomic,readonly) shared_ptr<vk::LabelTile>* labelTile;              //@synthesize labelTile=_labelTile - In the implementation block
-(id)description;
-(shared_ptr<vk::LabelTile>*)labelTile;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 tileType:(unsigned char)arg3 labelManager:(const shared_ptr<vk::LabelManager>Ref)arg4 ;
@end

