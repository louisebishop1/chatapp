//
//  ParseExampleViewController.h
//  Chat
//
//  Created by Louise Bishop on 15/01/2014.
//  Copyright (c) 2014 Louise Bishop. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "ParseExampleCell.h"


@interface ParseExampleViewController : UIViewController <UITableViewDelegate> {
    
    NSArray *usersArray;
}

@property (weak, nonatomic) IBOutlet UITableView *usersTable;

@end
