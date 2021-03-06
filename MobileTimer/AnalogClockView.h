/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "Clock-Protocol.h"

@class HandView, NSBundle, NSTimeZone, UIImage, UIImageView;

@interface AnalogClockView : UIView <Clock>
{
    NSBundle *_resourcesBundle;
    BOOL _registerForUpdates;
    BOOL _snippetStyle;
    UIImage *_backgroundImage;
    UIImage *_backgroundEveningImage;
    UIImageView *_background;
    HandView *_hourHand;
    HandView *_minsHand;
    HandView *_secsHand;
    BOOL _evening;
    float _seconds;
    int _sweepIndex;
    NSTimeZone *_timeZone;
}

+ (void)_updateTimes;
+ (void)_sweepBack;
+ (void)stopAllClocks;
+ (void)startAllClocks;
+ (void)registerClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (struct CGSize)defaultSize;
- (id)initWithFrame:(struct CGRect)arg1 registerForUpdates:(BOOL)arg2 offsets:(struct CGPoint *)arg3 scales:(struct CGSize *)arg4 bundle:(id)arg5 snippetStyle:(BOOL)arg6;
- (void)dealloc;
- (void)updateSweepBack;
- (void)_setEvening:(BOOL)arg1;
- (void)updateTime;
- (void)setTime:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end

