//
//  ViewController.m
//  PageControl
//
//  Created by shuangda on 2019/3/20.
//  Copyright © 2019年 lll. All rights reserved.
//

#import "ViewController.h"
#import "PageControl.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    PageControl *pageControl = [[PageControl alloc] initWithFrame:CGRectMake(0, CGRectGetHeight(self.view.frame) /2, [[UIScreen mainScreen] bounds].size.width, 30) indicatorMargin:5.f indicatorWidth:8.f currentIndicatorWidth:14.f indicatorHeight:8.f];
    
   
    pageControl.numberOfPages = 6;
    pageControl.currentPage = 3;
    
    [self.view addSubview:pageControl];
    
    
    // Do any additional setup after loading the view, typically from a nib.
}


@end
