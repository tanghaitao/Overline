//
// Created by yaakaito on 2013/03/22.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface NSDictionary (Selector)
- (id)objectForKey:(id)aKey transformBlock:(id (^)(id obj))block;
- (NSNumber *)numberForKey:(id)aKey;
- (NSString *)stringForKey:(id)aKey;
- (NSArray *)arrayForKey:(id)aKey;
- (NSDictionary *)dictionaryForKey:(id)aKey;
- (int)intForKey:(id)aKey;
- (NSInteger)integerForKey:(id)aKey;
- (unsigned int)unsignedIntForKey:(id)aKey;
- (NSUInteger)unsignedIntegerForKey:(id)aKey;
- (long)longForKey:(id)aKey;
- (unsigned long)unsignedLongForKey:(id)aKey;
- (long long)longLongForKey:(id)aKey;
- (unsigned long long)unsignedLongLongForKey:(id)aKey;
- (double)doubleForKey:(id)aKey;
- (float)floatForKey:(id)aKey;
@end