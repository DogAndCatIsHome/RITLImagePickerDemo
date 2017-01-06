//
//  RITLPhotoCacheManager.h
//  RITLPhotoDemo
//
//  Created by YueWen on 2016/12/29.
//  Copyright © 2017年 YueWen. All rights reserved.
//  Github:https://github.com/RITL/RITLImagePickerDemo
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 负责缓存选择图片对象的管理者
@interface RITLPhotoCacheManager : NSObject

/// 最大允许选择的图片数目，默认为MAX
@property (nonatomic, assign) NSUInteger maxNumberOfSelectedPhoto;

/// 记录当前选择的数量
@property (nonatomic, assign) NSUInteger numberOfSelectedPhoto;

/// 图片的大小，默认为RITLPhotoOriginSize
@property (nonatomic, assign) CGSize imageSize;

/// 是否为高清图，默认为false
@property (nonatomic, assign) BOOL isHightQuarity;

/// 资源是否为图片的标志位
@property (nonatomic, assign, nullable) BOOL * assetIsPictureSignal __deprecated_msg("Use assetIsPictureSignalArray instead.");

/// 资源是否为图片的标志位，用以替代assetIsPictureSignal
@property (nonatomic, strong) NSMutableArray <NSNumber *> * assetIsPictureSignalArray;

/// 资源是否被选中的标志位
@property (nonatomic, assign, nullable) BOOL * assetIsSelectedSignal __deprecated_msg("Use assetIsSelectedSignal instead.");

/// 资源是否被选中的标志位，用以替代assetIsSelectedSignal
@property (nonatomic, strong) NSMutableArray <NSNumber *> * assetIsSelectedSignalArray;

/// 获得单例对象
+ (instancetype)sharedInstace;


/**
 初始化资源是否为图片的标志位

 @param count 初始化长度
 */
- (void)allocInitAssetIsPictureSignal:(NSUInteger)count __deprecated_msg("Use -ritl_allocInitAssetIsPictureSignal: instead.");



/**
 初始化资源是否为图片的标志位

 @param count 初始化长度
 */
- (void)ritl_allocInitAssetIsPictureSignal:(NSUInteger)count;



/**
 初始化资源是否被选中的标志位

 @param count 初始化长度
 */
- (void)allocInitAssetIsSelectedSignal:(NSUInteger)count __deprecated_msg("Use -ritl_allocInitAssetIsSelectedSignal: instead.");



/**
 初始化资源是否被选中的标志位

 @param count 初始化长度
 */
- (void)ritl_allocInitAssetIsSelectedSignal:(NSUInteger)count;


/**
 修改index位置的选中状态

 @param index
 @return true表示修改成功，false失败
 */
- (BOOL)changeAssetIsSelectedSignal:(NSUInteger)index;



/**
 释放所有的信号资源
 */
- (void)freeAllSignal;


/// 重置初始化信号标志位
//void resetSignal(BOOL ** signal,NSUInteger count, BOOL value);


/// 取反
//void negation(BOOL * value);

@end

NS_ASSUME_NONNULL_END
