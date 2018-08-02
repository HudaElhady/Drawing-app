//
//  ViewController.h
//  DrawingApp
//
//  Created by MIS on 8/2/18.
//  Copyright © 2018 Huda Elhady. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UINavigationControllerDelegate,UIImagePickerControllerDelegate>
{
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}
@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempImage;

- (IBAction)colorPressed:(UIButton *)sender;
- (IBAction)eraserPressed:(UIButton *)sender;
- (IBAction)resetPressed:(UIButton *)sender;
- (IBAction)savePressed:(UIButton *)sender;
- (IBAction)uploadPressed:(UIButton *)sender;

@end

