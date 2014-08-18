//
//  AccountView.h
//  PeggSite
//
//  Created by Jennifer Duffey on 3/11/14.
//  Copyright (c) 2014 Jennifer Duffey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AccountView : UIView

@property (nonatomic, weak) IBOutlet UITextField *name, *userName, *email, *location;
@property (nonatomic, weak) IBOutlet UITextView *bioTextView;
@property (nonatomic, weak) IBOutlet AvatarView *avatarView;
@property (nonatomic, weak) IBOutlet UISwitch *privateSwitch;
@property (nonatomic, weak) IBOutlet UIImageView *privateImageView;
@property (nonatomic, strong) User *user;

@end