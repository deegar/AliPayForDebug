//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString;

@interface MOBILELBSLocationPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) double accuracy; // @dynamic accuracy;
@property(retain, nonatomic) NSString *adCode; // @dynamic adCode;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) double altitude; // @dynamic altitude;
@property(retain, nonatomic) NSArray *bizAreas; // @dynamic bizAreas;
@property(retain, nonatomic) NSArray *bluetoothDevices; // @dynamic bluetoothDevices;
@property(retain, nonatomic) NSArray *cdmaInfos; // @dynamic cdmaInfos;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *cityCode; // @dynamic cityCode;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) double direction; // @dynamic direction;
@property(retain, nonatomic) NSString *district; // @dynamic district;
@property(retain, nonatomic) NSString *districtCode; // @dynamic districtCode;
@property(retain, nonatomic) PBMapStringString *extraInfos; // @dynamic extraInfos;
@property(retain, nonatomic) NSArray *gsmInfos; // @dynamic gsmInfos;
@property(readonly) _Bool hasAccuracy; // @dynamic hasAccuracy;
@property(readonly) _Bool hasAdCode; // @dynamic hasAdCode;
@property(readonly) _Bool hasAddress; // @dynamic hasAddress;
@property(readonly) _Bool hasAltitude; // @dynamic hasAltitude;
@property(readonly) _Bool hasCity; // @dynamic hasCity;
@property(readonly) _Bool hasCityCode; // @dynamic hasCityCode;
@property(readonly) _Bool hasCountry; // @dynamic hasCountry;
@property(readonly) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(readonly) _Bool hasDirection; // @dynamic hasDirection;
@property(readonly) _Bool hasDistrict; // @dynamic hasDistrict;
@property(readonly) _Bool hasDistrictCode; // @dynamic hasDistrictCode;
@property(readonly) _Bool hasExtraInfos; // @dynamic hasExtraInfos;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasProvince; // @dynamic hasProvince;
@property(readonly) _Bool hasProvinceAdCode; // @dynamic hasProvinceAdCode;
@property(readonly) _Bool hasRealTime; // @dynamic hasRealTime;
@property(readonly) _Bool hasSpeed; // @dynamic hasSpeed;
@property(readonly) _Bool hasStreet; // @dynamic hasStreet;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *provinceAdCode; // @dynamic provinceAdCode;
@property(nonatomic) _Bool realTime; // @dynamic realTime;
@property(nonatomic) double speed; // @dynamic speed;
@property(retain, nonatomic) NSString *street; // @dynamic street;
@property(retain, nonatomic) NSArray *wifiInfos; // @dynamic wifiInfos;

@end
