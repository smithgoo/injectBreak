#line 1 "/Users/wangpeng/Desktop/IOS/逆向/mahuaInjert/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"


#import <UIKit/UIKit.h>
#import "MuHuaInjert.h"



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

@class MahuaAlertView; @class ZFPlayerControlView; @class BarrageCanvas; @class MeViewController; 
static double (*_logos_orig$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static double _logos_method$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id (*_logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id _logos_method$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, id); static long long (*_logos_orig$_ungrouped$MeViewController$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long _logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long (*_logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, id); static long long _logos_method$_ungrouped$MeViewController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$MahuaAlertView$showLXAlertView)(_LOGOS_SELF_TYPE_NORMAL MahuaAlertView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MahuaAlertView$showLXAlertView(_LOGOS_SELF_TYPE_NORMAL MahuaAlertView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$BarrageCanvas$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$)(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST, SEL, _Bool, _Bool); static void _logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST, SEL, _Bool, _Bool); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MeViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MeViewController"); } return _klass; }
#line 7 "/Users/wangpeng/Desktop/IOS/逆向/mahuaInjert/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"




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
if([indexPath row] == 0){
static NSString * switchCell = @"switchCell";
cell = [tableView dequeueReusableCellWithIdentifier:switchCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text = @"自动抢红包";

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

[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
textField.text = [MaHuaUserDefault valueForKey:NOLaunchAD];
textField.borderStyle = UITextBorderStyleRoundedRect;
cell.accessoryView = textField;
cell.imageView.image = [UIImage imageNamed:@"clock"];

}
cell.backgroundColor = [UIColor whiteColor];
return cell;

}else{
return _logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}
}






static long long _logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MeViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, long long section){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$MeViewController()]
&& section ==[self numberOfSectionsInTableView:tableView]-1){
return 2;

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
[self dismissAlertView];
}





static void _logos_method$_ungrouped$BarrageCanvas$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL BarrageCanvas* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews(self, _cmd);
for (UILabel *lab in self.subviews) {
lab.textColor =[UIColor clearColor];
}
}





static void _logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(_LOGOS_SELF_TYPE_NORMAL ZFPlayerControlView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, _Bool arg1, _Bool arg2) {
_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$(self, _cmd, arg1, arg2);
if(arg2==YES){
if(self.adView){
[self.adView removeFromSuperview];
}
}
}







static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$MeViewController = objc_getClass("MeViewController"); MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$heightForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$cellForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$MeViewController$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$MeViewController$tableView$numberOfRowsInSection$);MSHookMessageEx(_logos_class$_ungrouped$MeViewController, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$MeViewController$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$MeViewController$numberOfSectionsInTableView$);Class _logos_class$_ungrouped$MahuaAlertView = objc_getClass("MahuaAlertView"); MSHookMessageEx(_logos_class$_ungrouped$MahuaAlertView, @selector(showLXAlertView), (IMP)&_logos_method$_ungrouped$MahuaAlertView$showLXAlertView, (IMP*)&_logos_orig$_ungrouped$MahuaAlertView$showLXAlertView);Class _logos_class$_ungrouped$BarrageCanvas = objc_getClass("BarrageCanvas"); MSHookMessageEx(_logos_class$_ungrouped$BarrageCanvas, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$BarrageCanvas$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$BarrageCanvas$layoutSubviews);Class _logos_class$_ungrouped$ZFPlayerControlView = objc_getClass("ZFPlayerControlView"); MSHookMessageEx(_logos_class$_ungrouped$ZFPlayerControlView, @selector(zf_playAction:isShowAD:), (IMP)&_logos_method$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$, (IMP*)&_logos_orig$_ungrouped$ZFPlayerControlView$zf_playAction$isShowAD$);} }
#line 134 "/Users/wangpeng/Desktop/IOS/逆向/mahuaInjert/mahuaInjertDylib/Logos/mahuaInjertDylib.xm"
