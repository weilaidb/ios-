//
//  ViewController.h
//  PageNavgation
//
//  Created by 关东升 on 12-9-18.
//  本书网站：http://www.iosbook1.com
//  智捷iOS课堂：http://www.51work6.com
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  QQ：1575716557 邮箱：jylong06@163.com
//

#import <UIKit/UIKit.h>

enum DirectionForward
{
    ForwardBefore = 1 //向前
    ,ForwardAfter =2  //向后
};

@interface ViewController : UIViewController <UIPageViewControllerDataSource,UIPageViewControllerDelegate>
{
    //当前Page的索引
    int pageIndex;
    //翻页的方向 BeforeForward 向前 AfterForward 向后
    int  directionForward;
}

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
