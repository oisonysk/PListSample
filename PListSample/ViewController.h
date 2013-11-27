//
//  ViewController.h
//  PListSample
//
//  Created by fujita taisuke on 2012/08/01.
//  Copyright (c) 2012年 Revolution 9. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UILabel *bbb;

@property (weak, nonatomic) IBOutlet UITextField *xxx;

- (IBAction)respondToSaveButtonClick:(id)sender;

- (IBAction)respondToLoadButtonClick:(id)sender;

@end
