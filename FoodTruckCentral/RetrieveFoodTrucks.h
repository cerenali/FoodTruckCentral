//
//  RetriveFoodTrucks.h
//  FoodTruckCentral
//
//  Created by Joseph Cappadona on 1/17/15.
//  Copyright (c) 2015 JAAA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Firebase/Firebase.h>
#import "FoodTruckData.h"

@interface RetrieveFoodTrucks : NSObject

//sortType should be "name" or "owner" or "id" or "distance"
-(id)initWithURL:(NSString*)url sortedBy:(NSString*)sortType;

-(NSMutableDictionary*)getAllFoodTrucksAsDictionary;
-(NSMutableArray*)getAllFoodTrucksAsArray;
-(FoodTruckData*)getFoodTruckWithKey:(NSString*)name;

@property NSMutableDictionary *myData;
@end
