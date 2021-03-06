/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAuthoringController.h>

@interface MPAuthoringController (Internal)
- (void)cleanup;
- (void)setTitleTextToColor:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)setAuthoredDocument:(id)arg1;
- (id)_collectVersionInformationFromStyle:(id)arg1;
- (id)orderImages:(id)arg1 withOptions:(id)arg2;
- (void)cacheROIInformationForImages:(id)arg1 withOptions:(id)arg2;
- (id)effectsForImages:(id)arg1 withOptions:(id)arg2;
- (int)bestCountFromClusterForEffectWithImages:(id)arg1 atStartIndex:(int)arg2 withWeighter:(id)arg3 usedIndex:(int *)arg4;
- (void)populateWeighter:(id)arg1 withEffects:(id)arg2;
- (void)populateWeighter:(id)arg1 withTransitions:(id)arg2;
- (id)findEffectIDInWeighter:(id)arg1 images:(id)arg2 startingIndex:(int)arg3 count:(int)arg4 triesToFind:(int *)arg5;
- (BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)arg1 presetID:(id)arg2 atIndex:(int)arg3;
- (void)scaleDurationsInLayer:(id)arg1 withOptions:(id)arg2;
- (void)scaleDurationsInEffectContainers:(id)arg1 withOptions:(id)arg2;
- (void)matchDurationsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)fillDurationsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)checkForOffsetsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)beatAlignLayer:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3;
- (void)scaleLayerToMatchAudio:(id)arg1 withOptions:(id)arg2;
- (void)scaleLayerToMatchAudio:(id)arg1 withBeats:(id)arg2 withOptions:(id)arg3;
- (void)beatAlignEffectContainers:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3;
- (void)configureFiltersInDocument:(id)arg1 withOptions:(id)arg2;
- (void)configureTransitionsInDocument:(id)arg1 withOptions:(id)arg2;
- (id)chronologicalListOfFiles:(id)arg1;
- (id)createLayerWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3;
- (id)effectContainersWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3;
- (id)transitionFromOptions:(id)arg1 firstEffectContainer:(id)arg2 nextEffectContainer:(id)arg3;
- (id)createEffectToTransitionMapWithOptions:(id)arg1;
- (id)loopTransitionFromOptions:(id)arg1;
- (id)exportTransitionFromOptions:(id)arg1;
- (id)sortImagePaths:(id)arg1 toAspectRatiosInEffectPresetID:(id)arg2 withOptions:(id)arg3;
- (id)filtersForLayerFromOptions:(id)arg1;
- (id)filtersForEffectFromOptions:(id)arg1;
- (id)filtersForSlideFromOptions:(id)arg1;
- (id)frameFromOptions:(id)arg1;
- (id)createAudioPlayListFromAudioPaths:(id)arg1 andOptions:(id)arg2;
- (int)authorOrigamiDocument:(id)arg1 withOptions:(id)arg2;
- (int)authorLiveDocument:(id)arg1 withOptions:(id)arg2;
@end

