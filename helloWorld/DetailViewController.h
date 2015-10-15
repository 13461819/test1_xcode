//
//  DetailViewController.h
//  helloWorld
//
//  Created by DH on 2015. 10. 15..
//  Copyright © 2015년 DH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

