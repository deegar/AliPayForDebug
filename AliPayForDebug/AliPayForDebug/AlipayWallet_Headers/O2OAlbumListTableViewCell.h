//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class O2OAlbumModel, UIImageView, UILabel, UIView;

@interface O2OAlbumListTableViewCell : UITableViewCell
{
    O2OAlbumModel *_albumModel;
    UIView *_bottomLine;
    UIImageView *_imageIcon;
    UILabel *_albumName;
    UILabel *_nummberOfPhotos;
}

@property(retain, nonatomic) UILabel *nummberOfPhotos; // @synthesize nummberOfPhotos=_nummberOfPhotos;
@property(retain, nonatomic) UILabel *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) UIImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) O2OAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
