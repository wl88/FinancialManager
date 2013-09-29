//
//  FMViewController.h
//  FM
//
//  Created by Sherry Wenshun Liu on 9/27/13.
//  Copyright (c) 2013 Duke CS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMBrain.h"

@interface FMViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *myHomeTableView;

@property(nonatomic) NSString *myNewEventName;
@property(nonatomic) NSString *myNewEventMemo;
@property(nonatomic) NSString *myNewEventMember;
@property(nonatomic) UIImage *image;
@property(nonatomic) FMBrain *myBrain;

- (IBAction)insertNewObject;

@end
