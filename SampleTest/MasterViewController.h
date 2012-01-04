//
//  MasterViewController.h
//  SampleTest
//
//  Created by Sarabjeet Singh on 04/01/12.
//  Copyright (c) 2012 sarabjeet.cks@gmail.com All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
