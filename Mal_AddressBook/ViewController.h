//
//  ViewController.h
//  Mal_AddressBook
//
//  Created by malavika harikumardev on 3/14/15.
//  Copyright (c) 2015 malavika harikumardev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *firstName;
@property (weak, nonatomic) IBOutlet UILabel *phoneNumber;



@end





