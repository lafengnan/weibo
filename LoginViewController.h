//
//  LoginViewController.h
//  weibo
//
//  Created by lafengnan on 15/1/26.
//  Copyright (c) 2015年 panzhongbin@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *userName;
@property (weak, nonatomic) IBOutlet UITextField *passWord;


# pragma mark - UIAction
- (IBAction)doLogin:(id)sender;
- (IBAction)doSignup:(id)sender;

@end
