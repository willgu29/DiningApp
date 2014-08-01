//
//  Hours.h
//  Bruin Dining
//
//  Created by Mahir Eusufzai on 7/26/14.
//  Copyright (c) 2014 Mahir Eusufzai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HourHalls.h"

@interface Hours : NSObject

@property (nonatomic, retain) NSMutableDictionary *hallList;

- (void) addHall:(NSString*)hallName;
- (void) addOpeningTime:(NSDate*)opening ToMeal:(NSString*)meal Hall:(NSString*)hall;
- (void) addClosingTime:(NSDate*)closing ToMeal:(NSString*)meal Hall:(NSString*)hall;
- (NSArray*) getHoursForMeal:(NSString*) meal Hall:(NSString*) hall;
@end