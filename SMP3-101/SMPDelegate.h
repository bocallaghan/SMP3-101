//
//  SMPDelegate.h
//  SMP3-101
//
//  Created by Brenton O'Callaghan on 30/01/2014.
//  Copyright (c) 2014 Bluefin Solutions. All rights reserved.
//

#ifndef SMP3_101_SMPDelegate_h
#define SMP3_101_SMPDelegate_h

@protocol smpDelegate <NSObject>

// Method to be called if a registration was successful.
- (void)userRegistrationSuccessful;

// Method to be called if a user-registration failed.
- (void)userRegistrationFailed:(NSString *)message;

// Method to be called if the data retrieval completed successfully.
- (void)dataRetrievalComplete:(NSMutableArray *)results;

// Method to be called if data retrieval failed.
- (void)dataRetrievalFailed;

@end

#endif
