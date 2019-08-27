#line 1 "/Users/wangpeng/Desktop/injectBreak/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"


#import <UIKit/UIKit.h>
#import "MuHuaInjert.h"
#import "ConfigInfo.h"



#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class MeViewController; @class BarrageCanvas; @class MahuaAlertView; @class AppDelegate; @class MahuaADView; @class ZFPlayerControlView; 
static _Bool (*_logos_orig$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$)(_LOGOS_SELF_TYPE_NORMAL AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static _Bool _logos_method$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL AppDelegate* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$MahuaADView$setupLanchImageV)(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaADView$setupLanchImageV(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$MahuaADView$getLunchCache)(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaADView$getLunchCache(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$MahuaADView$addJumpBtn)(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaADView$addJumpBtn(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaADView$dissMissAction(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaADView$getNewLaunchMethod(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$MahuaADView$touchesBegan$withEvent$)(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$MahuaADView$touchesBegan$withEvent$(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$MeViewController$switchNODanMuChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UISwitch *); static void _logos_method$_ungrouped$MeViewController$switchNOLaunchADChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UISwitch *); static void _logos_method$_ungrouped$MeViewController$switchNOPlayADChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UISwitch *); static double (*_logos_orig$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static double _logos_method$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id (*_logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id _logos_method$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static long long (*_logos_orig$_ungrouped$MeViewController$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long _logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long (*_logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, id); static long long _logos_method$_ungrouped$MeViewController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$MahuaAlertView$showLXAlertView)(_LOGOS_SELF_TYPE_NORMAL MahuaAlertView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaAlertView$showLXAlertView(_LOGOS_SELF_TYPE_NORMAL MahuaAlertView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$BarrageCanvas$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$)(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST, SEL, _Bool, _Bool); static void _logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST, SEL, _Bool, _Bool); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MeViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MeViewController"); } return _klass; }
#line 8 "/Users/wangpeng/Desktop/injectBreak/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"

static _Bool _logos_method$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL AppDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
[ConfigInfo initialize];

return _logos_orig$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$(self, _cmd, arg1, arg2);

}







static void _logos_method$_ungrouped$MahuaADView$setupLanchImageV(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$MahuaADView$setupLanchImageV(self, _cmd);
[self performSelector:@selector(getNewLaunchMethod) withObject:nil  afterDelay:0];
UIButton *btn =[UIButton new];
btn.frame =CGRectMake(0, 0, self.jumpBtn.frame.size.width, self.jumpBtn.frame.size.height);
[self.jumpBtn addSubview:btn];
[btn addTarget:self action:@selector(dissMissAction) forControlEvents:UIControlEventTouchUpInside];
}

static void _logos_method$_ungrouped$MahuaADView$getLunchCache(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$MahuaADView$getLunchCache(self, _cmd);
[self performSelector:@selector(getNewLaunchMethod) withObject:nil  afterDelay:0];

}

static void _logos_method$_ungrouped$MahuaADView$addJumpBtn(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$MahuaADView$addJumpBtn(self, _cmd);


}


static void _logos_method$_ungrouped$MahuaADView$dissMissAction(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    [self removeFromSuperview];
    NSLog(@"点了关闭按钮");
}




static void _logos_method$_ungrouped$MahuaADView$getNewLaunchMethod(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
[self.lanchImageView sd_setImageWithURL:[NSURL URLWithString:@"https://www.baidu.com/img/bd_logo1.png"]];

}




static void _logos_method$_ungrouped$MahuaADView$touchesBegan$withEvent$(_LOGOS_SELF_TYPE_NORMAL MahuaADView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
[self performSelector:@selector(dissMissAction) withObject:nil  afterDelay:0];

NSLog(@"点击了广告1");
}












static void _logos_method$_ungrouped$MeViewController$switchNODanMuChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView){
[MaHuaUserDefault setBool:switchView.isOn forKey:NODanMu];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}


static void _logos_method$_ungrouped$MeViewController$switchNOLaunchADChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView){
[MaHuaUserDefault setBool:switchView.isOn forKey:NOLaunchAD];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}


static void _logos_method$_ungrouped$MeViewController$switchNOPlayADChang$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView){
[MaHuaUserDefault setBool:switchView.isOn forKey:NOPlayAD];
[MaHuaUserDefault synchronize];
[self.tableView reloadData];
}




static double _logos_method$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, id indexPath){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$MeViewController()]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){
return 44;

}else{
return _logos_orig$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}
}



static id _logos_method$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, id indexPath){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$MeViewController()]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){

UITableViewCell * cell = nil;
static NSString * switchCell = @"switchCell";
cell = [tableView dequeueReusableCellWithIdentifier:switchCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text =[@[@"去掉弹幕",@"去掉注册弹窗",@"去掉播放暂停广告"] objectAtIndex:[indexPath row]];

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
return _logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}
}



static long long _logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, long long section){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$MeViewController()]
&& section ==[self numberOfSectionsInTableView:tableView]-1){
return 3;

}else{
return _logos_orig$_ungrouped$MeViewController$tableView$numberOfRowsInSection$(self, _cmd, tableView, section);
}
}



static long long _logos_method$_ungrouped$MeViewController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
UITableView * tableView = MSHookIvar <UITableView *>(self,"_tableView");
if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$MeViewController()]){

return _logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$(self, _cmd, arg1)+1;

}else{
return _logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$(self, _cmd, arg1);
}
}






static void _logos_method$_ungrouped$MahuaAlertView$showLXAlertView(_LOGOS_SELF_TYPE_NORMAL MahuaAlertView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$MahuaAlertView$showLXAlertView(self, _cmd);
BOOL isshow =[MaHuaUserDefault boolForKey:NOLaunchAD];
if (isshow) {
[self dismissAlertView];
}
}





static void _logos_method$_ungrouped$BarrageCanvas$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews(self, _cmd);
for (UILabel *lab in self.subviews) {
BOOL isshow =[MaHuaUserDefault boolForKey:NODanMu];
if (isshow) {
lab.textColor =[UIColor clearColor];
}
}
}





static void _logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, _Bool arg1, _Bool arg2) {
_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(self, _cmd, arg1, arg2);
if(arg2==YES){
if(self.adView){
BOOL isshow =[MaHuaUserDefault boolForKey:NOPlayAD];
if (isshow) {
[self.adView removeFromSuperview];
}
}
}
}







static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$AppDelegate = objc_getClass("AppDelegate"); MSHookMessageEx(_logos_class$_ungrouped$AppDelegate, @selector(application:didFinishLaunchingWithOptions:), (IMP)&_logos_method$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$, (IMP*)&_logos_orig$_ungrouped$AppDelegate$application$didFinishLaunchingWithOptions$);Class _logos_class$_ungrouped$MahuaADView = objc_getClass("MahuaADView"); MSHookMessageEx(_logos_class$_ungrouped$MahuaADView, @selector(setupLanchImageV), (IMP)&_logos_method$_ungrouped$MahuaADView$setupLanchImageV, (IMP*)&_logos_orig$_ungrouped$MahuaADView$setupLanchImageV);MSHookMessageEx(_logos_class$_ungrouped$MahuaADView, @selector(getLunchCache), (IMP)&_logos_method$_ungrouped$MahuaADView$getLunchCache, (IMP*)&_logos_orig$_ungrouped$MahuaADView$getLunchCache);MSHookMessageEx(_logos_class$_ungrouped$MahuaADView, @selector(addJumpBtn), (IMP)&_logos_method$_ungrouped$MahuaADView$addJumpBtn, (IMP*)&_logos_orig$_ungrouped$MahuaADView$addJumpBtn);{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MahuaADView, @selector(dissMissAction), (IMP)&_logos_method$_ungrouped$MahuaADView$dissMissAction, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MahuaADView, @selector(getNewLaunchMethod), (IMP)&_logos_method$_ungrouped$MahuaADView$getNewLaunchMethod, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$MahuaADView, @selector(touchesBegan:withEvent:), (IMP)&_logos_method$_ungrouped$MahuaADView$touchesBegan$withEvent$, (IMP*)&_logos_orig$_ungrouped$MahuaADView$touchesBegan$withEvent$);Class _logos_class$_ungrouped$MeViewController = objc_getClass("MeViewController"); { char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MeViewController, @selector(switchNODanMuChang:), (IMP)&_logos_method$_ungrouped$MeViewController$switchNODanMuChang$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MeViewController, @selector(switchNOLaunchADChang:), (IMP)&_logos_method$_ungrouped$MeViewController$switchNOLaunchADChang$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MeViewController, @selector(switchNOPlayADChang:), (IMP)&_logos_method$_ungrouped$MeViewController$switchNOPlayADChang$, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$numberOfRowsInSection$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$MeViewController$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$);Class _logos_class$_ungrouped$MahuaAlertView = objc_getClass("MahuaAlertView"); MSHookMessageEx(_logos_class$_ungrouped$MahuaAlertView, @selector(showLXAlertView), (IMP)&_logos_method$_ungrouped$MahuaAlertView$showLXAlertView, (IMP*)&_logos_orig$_ungrouped$MahuaAlertView$showLXAlertView);Class _logos_class$_ungrouped$BarrageCanvas = objc_getClass("BarrageCanvas"); MSHookMessageEx(_logos_class$_ungrouped$BarrageCanvas, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$BarrageCanvas$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews);Class _logos_class$_ungrouped$ZFPlayerControlView = objc_getClass("ZFPlayerControlView"); MSHookMessageEx(_logos_class$_ungrouped$ZFPlayerControlView, @selector(zf_playAction:isShowAD:), (IMP)&_logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$, (IMP*)&_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$);} }
#line 236 "/Users/wangpeng/Desktop/injectBreak/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"
