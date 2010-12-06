//
//  RootViewController.h
//  folio2
//
//  Created by Lior Kesos on 12/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;
@class Projects;

@interface RootViewController : UITableViewController {
    DetailViewController *detailViewController;
	Projects *projects;
}

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;
@property (nonatomic, retain) IBOutlet Projects *projects;;
@end
