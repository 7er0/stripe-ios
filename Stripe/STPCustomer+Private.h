//
//  STPCustomer+Private.h
//  Stripe
//
//  Created by Ben Guo on 12/18/17.
//  Copyright © 2017 Stripe, Inc. All rights reserved.
//

#import "STPCustomer.h"

NS_ASSUME_NONNULL_BEGIN

@interface STPCustomer ()

/**
 Replaces the customer's `sources` and `defaultSource` based on whether or not
 they should include Apple Pay sources. More details on documentation for
 `STPCustomerContext includeApplePaySources`

 @param filterApplePay      If YES, Apple Pay sources will be ignored
 */
- (void)updateSourcesFilteringApplePay:(BOOL)filterApplePay;

@end

NS_ASSUME_NONNULL_END
