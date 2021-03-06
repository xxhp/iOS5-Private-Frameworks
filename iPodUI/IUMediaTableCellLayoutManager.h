/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCellLayoutManager.h"

@interface IUMediaTableCellLayoutManager : UITableViewCellLayoutManager
{
    BOOL _ignoresLeftIndentWhenEditing;
}

@property(nonatomic) BOOL ignoresLeftIndentWhenEditing; // @synthesize ignoresLeftIndentWhenEditing=_ignoresLeftIndentWhenEditing;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;

@end

