#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Bybit API
* ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
*
* OpenAPI spec version: 0.2.10
* Contact: support@bybit.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGV2OrderRes.h"
@protocol SWGV2OrderRes;
@class SWGV2OrderRes;



@protocol SWGV2OrderListData
@end

@interface SWGV2OrderListData : SWGObject


@property(nonatomic) NSArray<SWGV2OrderRes>* data;

@property(nonatomic) NSString* cursor;

@end
