//
//  DetailViewController.h
//  first
//
//  Created by Kate on 29.02.16.
//  Copyright © 2016 Kate. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

