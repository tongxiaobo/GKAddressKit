//
//  AddressEditController.h
//  GKCommerce
//
//  Created by 小悟空 on 14/11/7.
//  Copyright (c) 2014年 GKCommerce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GKAddressCommon.h"
#import "GKRegionPickerView.h"

@interface AddressEditController : UIViewController
<UITableViewDataSource, UITableViewDelegate,
RegionPickerViewControllerDelegate, UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) id<GKAddressService> service;
@property (strong, nonatomic) NSArray *regions;
@property (strong, nonatomic) GKRegionPickerView *regionPicker;
@property (strong, nonatomic) GKAddress *address;
@property (strong, nonatomic) GKUser *user;

- (id)initWithAddress:(GKAddress *)address user:(GKUser *)anUser;
@end
