// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import "MuHuaInjert.h"
#import "ConfigInfo.h"
#import "SubView.h"


%hook  AppDelegate
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
[ConfigInfo initialize];

return %orig;

}
%end




//替换启动的图片 和点击的跳转方法
%hook  MahuaADView
- (void)setupLanchImageV {
%orig;
for (UIView *x in self.subviews) {
[x removeFromSuperview];
}
 
SubView *subV =[[SubView alloc] initWithFrame:self.frame];
[self addSubview:subV];
subV.adClickCallBack = ^{
[self performSelector:@selector(dissMissAction) withObject:nil  afterDelay:0];
};
//[self performSelector:@selector(getNewLaunchMethod) withObject:nil  afterDelay:0];

}

//- (void)getLunchCache {
//%orig;
//[self performSelector:@selector(getNewLaunchMethod) withObject:nil  afterDelay:0];

//}

- (void)addJumpBtn {
%orig;
[self.jumpBtn removeFromSuperview];

}

%new
- (void)dissMissAction {
    [self removeFromSuperview];
    NSLog(@"点了关闭按钮");
}


//原生app 没这个方法只能用perform 方式调用 不能用self self 不具备这个方法
//%new
//- (void)getNewLaunchMethod {
//[self.lanchImageView sd_setImageWithURL:[NSURL URLWithString:@"https://www.baidu.com/img/bd_logo1.png"]];

//}



//广告点击跳转
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 {

NSLog(@"点击了广告1");
}
%end







//新增个人中心去除广告和弹幕的功能
%hook MeViewController

%new
-(void)switchNODanMuChang:(UISwitch *)switchView{
[MaHuaUserDefault setBool:switchView.isOn forKey:NODanMu];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}

%new
-(void)switchNOLaunchADChang:(UISwitch *)switchView{
[MaHuaUserDefault setBool:switchView.isOn forKey:NOLaunchAD];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}

%new
-(void)switchNOPlayADChang:(UISwitch *)switchView{
[MaHuaUserDefault setBool:switchView.isOn forKey:NOPlayAD];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}


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
static NSString * switchCell = @"switchCell";
cell = [tableView dequeueReusableCellWithIdentifier:switchCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text =[@[@"去掉弹幕",@"去掉注册弹窗",@"去掉播放暂停广告"] objectAtIndex:[indexPath row]];
//抢红包开关!!
UISwitch * switchView = [[UISwitch alloc] init];
switch ([indexPath row]) {
case 0:
{
switchView.on = [MaHuaUserDefault boolForKey:NODanMu];
[switchView addTarget:self action:@selector(switchNODanMuChang:) forControlEvents:(UIControlEventValueChanged)];
}
break;
case 1:
{
switchView.on = [MaHuaUserDefault boolForKey:NOLaunchAD];
[switchView addTarget:self action:@selector(switchNOLaunchADChang:) forControlEvents:(UIControlEventValueChanged)];
}
break;
case 2:
{
switchView.on = [MaHuaUserDefault boolForKey:NOPlayAD];
[switchView addTarget:self action:@selector(switchNOPlayADChang:) forControlEvents:(UIControlEventValueChanged)];
}
break;

default:
break;
}

cell.accessoryView = switchView;
cell.imageView.image = [UIImage imageNamed:([MaHuaUserDefault boolForKey:NOLaunchAD] == 1) ? @"unlocked" : @"locked"];
cell.backgroundColor = [UIColor whiteColor];
return cell;

}else{
return %orig;
}
}


//每组多少行
- (long long)tableView:(UITableView *)tableView numberOfRowsInSection:(long long)section{
//定位设置界面,并且是最后一个
if([tableView.nextResponder.nextResponder isKindOfClass:%c(MeViewController)]
&& section ==[self numberOfSectionsInTableView:tableView]-1){
return 3;

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
BOOL isshow =[MaHuaUserDefault boolForKey:NOLaunchAD];
if (isshow) {
[self dismissAlertView];
}
}
%end


// 去除播放器弹幕
%hook BarrageCanvas
- (void)layoutSubviews {
%orig;
for (UILabel *lab in self.subviews) {
BOOL isshow =[MaHuaUserDefault boolForKey:NODanMu];
if (isshow) {
lab.textColor =[UIColor clearColor];
}
}
}
%end


// 去除播放器暂停广告
%hook ZFPlayerControlView
- (void)zf_playAction:(_Bool)arg1 isShowAD:(_Bool)arg2 {
%orig;
if(arg2==YES){
if(self.adView){
BOOL isshow =[MaHuaUserDefault boolForKey:NOPlayAD];
if (isshow) {
[self.adView removeFromSuperview];
}
}
}
}
%end






