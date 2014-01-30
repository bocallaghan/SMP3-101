//
//  MainViewController.h
//  SMP3-101
//
//  Created by Brenton O'Callaghan on 30/01/2014.
//  Copyright (c) 2014 Bluefin Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMPDelegate.h"
#import "SMPController.h"

@interface MainViewController : UIViewController <smpDelegate, UITableViewDataSource>

// Our buttons and result table
@property (weak, nonatomic) IBOutlet UIButton *registerButton;
@property (weak, nonatomic) IBOutlet UIButton *downloadDataButton;
@property (weak, nonatomic) IBOutlet UITableView *resultsTable;

// Our actions on the buttons
- (IBAction)startRegistration:(id)sender;
- (IBAction)startDataDownload:(id)sender;



@end
