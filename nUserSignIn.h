//
//  nUserSignIn.h
//  nehru
//
//  Created by ADMIN on 11/27/13.
//  Copyright (c) 2013 nehru. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface nUserSignIn : UIViewController

{
    IBOutlet UITextField *usrNameField;
    IBOutlet UITextField *usrPwdField;
}

-(IBAction)usrSignIn:(id)sender;

@end
