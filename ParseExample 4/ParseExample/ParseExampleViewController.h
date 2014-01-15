//
//  ParseExampleViewController.h
//  ParseExample
//
//
//  Created by Louise Bishop
//


#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "ParseExampleCell.h"


@interface ParseExampleViewController : UIViewController <UITableViewDelegate> {
    
    NSArray *usersArray;
}

@property (weak, nonatomic) IBOutlet UITableView *usersTable;

@end
