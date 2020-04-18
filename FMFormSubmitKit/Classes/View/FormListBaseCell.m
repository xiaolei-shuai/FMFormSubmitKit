//
//  FormListBaseCell.m
//  YaLeGou
//
//  Created by 郑桂华 on 2019/12/14.
//  Copyright © 2019 y. All rights reserved.
//

#import "FormListBaseCell.h"
#import "FormListBaseModel.h"

@implementation FormListBaseCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        self.contentView.backgroundColor = [UIColor whiteColor];
        UIView *line = [[UIView alloc] init];
        line.backgroundColor = FormCellBottomLineColor;
        [self.contentView addSubview:line];
        [line mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.mas_equalTo(Form_BaseSize(0));
            make.right.mas_equalTo(-Form_BaseSize(0));
            make.bottom.mas_equalTo(0);
            make.height.mas_equalTo(FormCellBottomLineDefaultHeight);
        }];
        self.bottomLineView = line;
    }
    return self;
}

- (void)setModel:(FormListBaseModel *)model{
    _model = model;
    [self.bottomLineView mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.height.mas_equalTo(model.bottomLineHeight);
        make.left.mas_equalTo(model.bottomLineLRMargin);
        make.right.mas_equalTo(-model.bottomLineLRMargin);
        make.bottom.mas_equalTo(0);
    }];
}

@end