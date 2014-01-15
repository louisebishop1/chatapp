//
//  ParseImageViewController.h
//  ParseExample
//
//
//  Created by Louise Bishop
//


#import <UIKit/UIKit.h>
#import "ImageExampleCell.h"
#import <Parse/Parse.h>

@interface ParseImageViewController : UIViewController {
    
    NSArray *imageFilesArray;
    NSMutableArray *imagesArray;
}

@property (weak, nonatomic) IBOutlet UICollectionView *imagesCollection;

@end
