//
//  VideoViewController.h
//  JiangHomeStyle
//
//  Created by 工业设计中意（湖南） on 13-12-16.
//  Copyright (c) 2013年 cidesign. All rights reserved.
//

#import <MediaPlayer/MediaPlayer.h>
#import <UIKit/UIKit.h>

@protocol MJPopupDelegate;

@interface VideoViewController : UIViewController
{
    UIButton *backBtn;
    NSString *url;
    MPMoviePlayerViewController *mp;
    MPMoviePlayerController *player;
}
@property (weak, nonatomic) id<MJPopupDelegate> delegate;
@property (strong,nonatomic) NSString *url;
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil andUrl:(NSString *)url;
@end
