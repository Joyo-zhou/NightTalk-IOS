//
//  AppDelegate.h
//  mosad_hw_final
//
//  Created by Jason on 2020/12/17.
//  Copyright © 2020 Jason. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserPlaneView.h"
#import "MatchViewController.h"
#import "UserInfoEditView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property Boolean *isLogin;

@property NSString *URL;

// zl
@property UIView *userPlane;
@property UIView *editInfo;

@property uint userId;
@property NSString *userName;
@property NSString *password;
@property UIImage *userAvatar;
@property uint score;


// ***********************************

@property uint roomID;

@property MatchViewController *matchViewController;

@end 
