//
//  MenuItem.h
//  UCLA_Dining
//
//  Created by Mahir Eusufzai on 3/26/14.
//  Copyright (c) 2014 Mahir Eusufzai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuItem : NSObject

@property (nonatomic, retain) NSString *name;
//TO DO: URL

- (id)initWithName:(NSString*)n andURL:(NSString*)url;
@end