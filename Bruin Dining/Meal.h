//
//  Meal.h
//  UCLA_Dining
//
//  Created by Mahir Eusufzai on 3/26/14.
//  Copyright (c) 2014 Mahir Eusufzai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DiningHall.h"
@interface Meal : NSObject {
    
}

@property (nonatomic, retain) NSMutableDictionary *hallList;
@property (nonatomic, retain) NSString* name;

- (id) initWithName:(NSString*)n;
- (void) addHall:(DiningHall*)hall;
- (Station*)getStation:(int)stationIndex ForHall:(NSString*)hallName;
@end

