
#import <Foundation/Foundation.h>
#import "SmiAnalytics.h"



#define SDSTATE_CHANGE_NOTIF  @"SmiStateChange"


typedef NS_ENUM(NSInteger, SdState) {
    SD_WIFI = 1,
    SD_AVAILABLE = 2,
    SD_NOT_AVAILABLE = 3
};

typedef NS_ENUM(NSInteger, SdReason) {
    SD_REASON_NONE = 0,
    SD_REASON_DUPLICATE_API_CALL = 1,
    SD_NOT_AVAILABLE_FOR_OPERATOR = 2,
    SD_NOT_AVAILABLE_FOR_APPLICATION = 3,
    SD_NOT_AVAILABLE_FOR_URL = 4,
    SD_NOT_AVAILABLE_FOR_DEVICE_OR_USER = 5 ,
    SD_NOT_AVAILABLE_PROMOTION_EXPIRED = 6,
    SD_NOT_AVAILABLE_PROMOTION_SUSPENDED = 7,
    SD_NOT_AVAILABLE_PROMOTION_LIMIT_EXCEEDED = 8,
    SD_NOT_AVAILABLE_USER_LIMIT_EXCEEDED = 9,
    SD_NOT_AVAILABLE_PROMOTION_NOT_FOUND = 10,
    SD_NOT_AVAILABLE_SDK_INTERNAL_ERROR = 11,
    SD_NOT_AVAILABLE_SDK_VERSION_NOT_SUPPORTED = 12,
    SD_NOT_AVAILABLE_SDK_REGISTRATION_NOT_DONE = 13 ,
    SD_NOT_AVAILABLE_SDK_NOT_SUPPORTED_FOR_APP_OR_CARRIER = 14,
    SD_NOT_AVAILABLE_URAM_NO_HEADER_INJECTED = 15,
    SD_NOT_AVAILABLE_SD_NOT_SUPPORTED_IN_ROAMING = 16,
    SD_NOT_AVAILABLE_SD_TESTING = 17,
    SD_NOT_AVAILABLE_REASON_UNKNOWN = 100
};


@interface SmiResult : NSObject
{
}

@property (assign, nonatomic) SdState       sdState;
@property (assign, nonatomic) SdReason      sdReason;
@property (strong, nonatomic) NSString      * url;

@end

@interface SmiSdk : NSObject
{
}

+(SmiResult*)getSDAuth:(NSString*)sdkKey url:(NSString*)url userId:(NSString*)userId;



/*Its an asyncronous call, App has to register notification for SD_STATE_CHANGE*/
+(void)getAppSDAuth:(NSString*)sdkKey userId:(NSString*)userId showSDMessage: (Boolean) showSDMessage __deprecated __deprecated_msg("use initSponsoredData instead.");


+(void)getAppSDAuth:(NSString*)sdkKey userId:(NSString*)userId showSDMessage: (Boolean) showSDMessage exclusionDomains:(NSArray*) domains __deprecated __deprecated_msg("use initSponsoredData instead.");
;

+(void) initSponsoredData:(NSString*)sdkKey userId:(NSString*)userId showSDMessage: (Boolean) showSDMessage;

+(void)initSponsoredData:(NSString*)sdkKey userId:(NSString*)userId showSDMessage: (Boolean) showSDMessage exclusionDomains:(NSArray*) domains;

+(void)registerEvent:(NSString*)evtName withProperties:(NSDictionary*)props;

+(void)registerAppConfiguration:(NSURLSessionConfiguration*) aConfig;

+(void) startSponsorData;

+(void) stopSponsorData;

+(SmiAnalytics*) getAnalytics;

@end



