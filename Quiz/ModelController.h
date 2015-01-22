//
//  ModelController.h
//  Quiz
//
//  Created by Carper, Iyeshia Milan on 1/22/15.
//  Copyright (c) 2015 Carper, Iyeshia Milan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

