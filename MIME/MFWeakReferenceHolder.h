/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFWeakSet, NSLock;

@interface MFWeakReferenceHolder : NSObject
{
    id <NSObject> _reference;
    NSLock *_lock;
    MFWeakSet *_observers;
}

+ (id)weakReferenceWithObject:(id)arg1 referenceObserver:(id)arg2;
+ (id)weakReferenceWithObject:(id)arg1;
- (id)init;
- (id)_initWithObject:(id)arg1;
- (void)dealloc;
- (void)_override_release;
- (void)_addObserver:(id)arg1;
- (void)removeReferenceObserver:(id)arg1;
- (id)retainedReference;

@end

