//
//  LSYReadView.h
//  LSYReader
//
//  Created by Labanotation on 16/5/30.
//  Copyright © 2016年 okwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YYText.h"

@protocol LSYReadViewControllerDelegate;
@interface LSYReadView : UIView
@property (nonatomic,assign) CTFrameRef frameRef;
@property (nonatomic, strong) YYTextLayout* textLayout;
@property (nonatomic, strong) NSAttributedString* attributedContent;
@property (nonatomic,strong) NSString *content;
@property (nonatomic,strong) id<LSYReadViewControllerDelegate>delegate;
-(void)cancelSelected;
@end
