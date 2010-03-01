//
//  FSLicense.h
//  FSEmbeddedStore
//
//  Created by Lars Steiger on 2/24/10.
//  Copyright 2010 FastSpring. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FSLicense : NSObject {
	NSDictionary *raw;
}

+ (FSLicense *)licenseWithDictionary:(NSDictionary *)aDictionary;

- (FSLicense *)initWithDictionary:(NSDictionary *)aDictionary;
- (NSDictionary *)raw;
- (void)setRaw:(NSDictionary *)aDictionary;

- (NSString *)licenseName;
- (NSString *)licenseEmail;
- (NSString *)licenseCompany;
- (NSString *)firstLicenseCode;
- (NSArray *)licenseCodes;
- (NSDictionary *)licensePropertyList;
- (NSURL *)licenseURL;

@end