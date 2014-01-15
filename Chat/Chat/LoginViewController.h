//
//  LoginViewController.h
//  Chat
//
//  Created by Louise Bishop on 15/01/2014.
//  Copyright (c) 2014 Louise Bishop. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *reEnterPasswordField;
@property (weak, nonatomic) IBOutlet UIView *loginOverlayView;

- (IBAction)registerAction:(id)sender;
- (IBAction)registeredButton:(id)sender;

- (IBAction)loginButton:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *loginUsernameField;
@property (weak, nonatomic) IBOutlet UITextField *loginPasswordField;

@end
