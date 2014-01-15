//
//  ImageExampleCell.h
//  ParseExample
//
//
//  Created by Louise Bishop
//

#import <UIKit/UIKit.h>

@interface ImageExampleCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *parseImage;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loadingSpinner;

@end
