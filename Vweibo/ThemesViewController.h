//
//  ThemesViewController.h
//  Vweibo
//
//  Created by 董书建 on 14/9/25.
//  Copyright (c) 2014年 Vean. All rights reserved.
//

#import "ViewController.h"

@interface ThemesViewController : ViewController<UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property(retain, nonatomic) NSArray *themes;

@end
