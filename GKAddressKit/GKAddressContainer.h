//
//  GKAddressContainer.h
//  GKAddressKitExample
//
//  Created by 小悟空 on 2/21/15.
//  Copyright (c) 2015 Goku. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GKRegionBackend.h"
#import "GKAddressService.h"

@protocol GKAddressContainer <NSObject>

- (id<GKRegionBackend>)regionBackend;
- (id<GKAddressService>)addressService;
@end
