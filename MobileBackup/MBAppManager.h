/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject
{
    MBSettingsContext *_settingsContext;
    NSMutableDictionary *_appsByBundleID;
}

+ (id)appManager;
- (id)initWithSettingsContext:(id)arg1;
- (void)dealloc;
- (id)allDisabledDomainNames;
- (void)removeAllDisabledDomainNames;
- (BOOL)isDomainNameEnabled:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (id)allRestrictedDomainNames;
- (BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id *)arg2;
- (id)_userAppsWithError:(id *)arg1;
- (id)_safeHarborsWithError:(id *)arg1;
- (id)_appsWithPlists:(id)arg1 error:(id *)arg2;
- (id)allApps;
- (id)appWithBundleID:(id)arg1;
- (void)removeOldSafeHarbors;
- (id)createSafeHarborForApp:(id)arg1 _register:(BOOL)arg2 error:(id *)arg3;
- (BOOL)processRestoredAppsWithBundleIDs:(id)arg1 error:(id *)arg2;

@end
