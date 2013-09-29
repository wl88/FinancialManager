//
//  FMCollection.h
//  FM
//
//  Created by  mac on 9/27/13.
//  Copyright (c) 2013 Duke CS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMTrip.h"


@interface FMCollection : UICollectionViewController

@property (strong, nonatomic) UIImage * DEFAULT_TRANS_PIC;
@property (strong, nonatomic) UIImage * DINING;
@property (strong, nonatomic) UIImage * HOTEL;
@property (strong, nonatomic) UIImage * FUN;
@property (strong, nonatomic) UIImage * SHOPPING;
@property (strong, nonatomic) NSArray * PICArray;

@property (strong, nonatomic) FMTrip* myTrip;
@property NSInteger numItems;

@property (strong, nonatomic) NSString *myNewTransName;

- (void)refresh;
- (IBAction)setFlowAndItemSize;
- (void)initWithTripPtr:(FMTrip *)tripPtr;
- (int) switchCate:(NSString*) str;

@end
