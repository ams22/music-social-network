//
//  DetailViewController.h
//  music-social-network
//
//  Created by Дарья Колодзей on 12.03.16.
//  Copyright © 2016 technotrack-heroes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

