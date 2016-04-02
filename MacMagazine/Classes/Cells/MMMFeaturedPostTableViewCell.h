//
//  MMMFeaturedPostTableViewCell.h
//  MacMagazine
//
//  Created by Fernando Saragoca on 6/21/15.
//  Copyright (c) 2015 made@sampa. All rights reserved.
//

#import <SUNKit/SUNTableViewCell.h>

#import "MMMLabel.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMMFeaturedPostTableViewCell : SUNTableViewCell

@property (nonatomic, weak, nullable) IBOutlet UIImageView *thumbnailImageView;
@property (nonatomic, weak, nullable) IBOutlet MMMLabel *headlineLabel;
@property (nonatomic, weak, nullable) IBOutlet MMMLabel *subheadlineLabel;
@property (nonatomic, weak, nullable) IBOutlet UIView *separatorView;

@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *topSpaceConstraint;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *bottomSpaceConstraint;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *trailingSpaceConstraint;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *leadingSpaceConstraint;

@property (nonatomic) CGFloat headlineTopSpaceConstant;
@property (nonatomic) CGFloat headlineBottomSpaceConstant;
@property (nonatomic) CGFloat layoutWidth;

@end

NS_ASSUME_NONNULL_END
