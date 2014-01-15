//
//  ParseExampleViewController.m
//  Chat
//
//  Created by Louise Bishop on 15/01/2014.
//  Copyright (c) 2014 Louise Bishop. All rights reserved.
//


#import "ParseExampleViewController.h"

@interface ParseExampleViewController ()

@end

@implementation ParseExampleViewController

@synthesize usersTable;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [self performSelector:@selector(retrieveFromParse)];
}

- (void) retrieveFromParse {
    
    //
    // PFQuery *retrieveUser = [PFUser query];
    // NSArray *userArray = [retrieveUser findObjects];
    
    // Can't seem to access username from user table (I'm probably being stupid.)- have created this table to set up rest of app
    PFQuery *retrieveUsers = [PFQuery queryWithClassName:@"tableViewData"];
    
    [retrieveUsers findObjectsInBackgroundWithBlock:^(NSArray *objects, NSError *error) {
        if (!error) {
            usersArray = [[NSArray alloc] initWithArray:objects];
        }
        [usersTable reloadData];
    }];
}





// Setup table of usernames

//get number of sections in tableview
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    // Return the number of sections.
    return 1;
}

//get number of rows by counting number of folders
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return usersArray.count;
}

//setup cells in tableView
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    //setup cell
    static NSString *CellIdentifier = @"usersCell";
    ParseExampleCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    
    PFObject *tempObject = [usersArray objectAtIndex:indexPath.row];
    
   // cell.cellTitle.text = [tempObject objectForKey:@"cellTitle"];
    
    return cell;
}


//user selects folder to add tag to
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    NSLog(@"cell tapped");
}





- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
