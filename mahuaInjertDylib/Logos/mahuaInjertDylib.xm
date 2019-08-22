// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import "MuHuaInjert.h"

//新增个人中心去除广告和弹幕的功能
%hook MeViewController

//返回高度
- (double)tableView:
(UITableView *)tableView heightForRowAtIndexPath:(id)indexPath{
//定位设置界面,并且是最后一组
if([tableView.nextResponder.nextResponder isKindOfClass:%c(MeViewController)]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){
return 44;

}else{
return %orig;
}
}


//每一个Cell
- (id)tableView:(UITableView *)tableView cellForRowAtIndexPath:(id)indexPath{
//定位设置界面,并且是最后一组
if([tableView.nextResponder.nextResponder isKindOfClass:%c(MeViewController)]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){

UITableViewCell * cell = nil;
if([indexPath row] == 0){
static NSString * switchCell = @"switchCell";
cell = [tableView dequeueReusableCellWithIdentifier:switchCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text = @"自动抢红包";
//抢红包开关!!
UISwitch * switchView = [[UISwitch alloc] init];
switchView.on = [MaHuaUserDefault boolForKey:NOLaunchAD];
[switchView addTarget:self action:@selector(switchChang:) forControlEvents:(UIControlEventValueChanged)];
cell.accessoryView = switchView;
cell.imageView.image = [UIImage imageNamed:([MaHuaUserDefault boolForKey:NOLaunchAD] == 1) ? @"unlocked" : @"locked"];
}else if([indexPath row] == 1){
static NSString * waitCell = @"waitCell";
cell = [tableView dequeueReusableCellWithIdentifier:waitCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text = @"等待时间(秒)";
UITextField * textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, 150, 40)];
//监听键盘输入
[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
textField.text = [MaHuaUserDefault valueForKey:NOLaunchAD];
textField.borderStyle = UITextBorderStyleRoundedRect;
cell.accessoryView = textField;
cell.imageView.image = [UIImage imageNamed:@"clock"];

}
cell.backgroundColor = [UIColor whiteColor];
return cell;

}else{
return %orig;
}
}





//没组多少行
- (long long)tableView:(UITableView *)tableView numberOfRowsInSection:(long long)section{
//定位设置界面,并且是最后一个
if([tableView.nextResponder.nextResponder isKindOfClass:%c(MeViewController)]
&& section ==[self numberOfSectionsInTableView:tableView]-1){
return 2;

}else{
return %orig;
}
}
//多少组
- (long long)numberOfSectionsInTableView:(id)arg1{
UITableView * tableView = MSHookIvar <UITableView *>(self,"_tableView");
if([tableView.nextResponder.nextResponder isKindOfClass:%c(MeViewController)]){//定位设置界面
//在原来基础上多搞一组
return %orig+1;

}else{
return %orig;
}
}
%end



//去除麻花弹窗注册广告
%hook MahuaAlertView
- (void)showLXAlertView {
%orig;
[self dismissAlertView];
}
%end


// 去除播放器弹幕
%hook BarrageCanvas
- (void)layoutSubviews {
%orig;
for (UILabel *lab in self.subviews) {
lab.textColor =[UIColor clearColor];
}
}
%end


// 去除播放器暂停广告
%hook ZFPlayerControlView
- (void)zf_playAction:(_Bool)arg1 isShowAD:(_Bool)arg2 {
%orig;
if(arg2==YES){
if(self.adView){
[self.adView removeFromSuperview];
}
}
}
%end






