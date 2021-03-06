//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSNumber;

@interface ZSLimitTextField : UITextField
{
    NSNumber *_max;
    NSNumber *_min;
}

@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (void)setup;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;

@end

