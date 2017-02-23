//
//  SmiAnalytics.h
//  smisdk
//
//  Created by Sonali on 27/12/16.
//  Copyright © 2016 datami. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SmiAnalytics : NSObject{

    
}

@property (nonatomic, assign) NSTimeInterval fgCellularSessionTime;
@property (nonatomic, assign) NSTimeInterval fgWifiSessionTime;
@property (nonatomic, assign) int64_t sdDataUsage;

@end
