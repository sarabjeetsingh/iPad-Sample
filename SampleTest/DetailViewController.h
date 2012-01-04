//
//  DetailViewController.h
//  SampleTest
//
//  Created by Sarabjeet Singh on 04/01/12.
//  Copyright (c) 2012 sarabjeet.cks@gmail.com All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
