//
//  STPPaymentAuthorizationCoordinator.h
//  Stripe
//
//  Created by Jack Flintermann on 3/28/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import "STPBaseCoordinator.h"
#import <PassKit/PassKit.h>

@interface STPPaymentAuthorizationCoordinator : STPBaseCoordinator

@property(nonatomic, weak, readonly)id<STPCoordinatorDelegate>delegate;
@property(nonatomic, readonly)UINavigationController *navigationController;
@property(nonatomic, readonly)STPAPIClient *apiClient;
@property(nonatomic, readonly)id<STPSourceProvider> sourceProvider;
@property(nonatomic, readonly)PKPaymentRequest *paymentRequest;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController
                              paymentRequest:(PKPaymentRequest *)paymentRequest
                                   apiClient:(STPAPIClient *)apiClient
                              sourceProvider:(id<STPSourceProvider>)sourceProvider
                                    delegate:(id<STPCoordinatorDelegate>)delegate;

@end
