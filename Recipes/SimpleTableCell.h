//
//  SimpleTableCell.h
//  Recipes
//
//  Created by Дмитрий Валуев on 12/10/2016.
//  Copyright © 2016 Дмитрий Валуев. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
