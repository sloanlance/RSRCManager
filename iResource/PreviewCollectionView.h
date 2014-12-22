//
//  PreviewCollectionView.h
//  iResource
//
//  Created by Vitalii Parovishnyk on 12/22/14.
//  Copyright (c) 2014 IGR Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol QuickLookCollectionViewDelegate <NSObject>
@required
- (void)didPressSpacebarForCollectionView:(NSCollectionView *)tableView;
- (void)didChangedSelectionCollectionItemView:(NSCollectionViewItem *)collectionViewItem;

@end

@interface PreviewCollectionView : NSCollectionView

@property (nonatomic, weak) IBOutlet id<QuickLookCollectionViewDelegate> qlDelegate;

- (void)didChangedSelectionCollectionItemView:(NSCollectionViewItem *)collectionViewItem;

@end