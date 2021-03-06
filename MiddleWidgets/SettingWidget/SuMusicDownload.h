﻿#ifndef SuMusicDownload_H
#define SuMusicDownload_H
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QCheckBox>
#include "BesButton.h"
#include "ISettingUnit.h"

class SuMusicDownload: public ISettingUnit
{
public:
    virtual QString getName() override;
    virtual int getUnitHeight() override;
    virtual QWidget* getUnitWidget(QWidget* parent) override;

private:
    virtual QString getTipAfterAgreeForTimes(int);

    virtual QString getTipForClickCount(int count, qint64 currentTime);

public:
    QWidget* SettingUnitContainer;

    QLabel*  labelSettingTitle;

    BesButton*  btnSelectMusicDownloadPath;
    QLabel*  labelMusicDownloadPathTip;
    QLabel*  labelMusicDownloadPath;

    QCheckBox*  checkboxMusicDownload;
};

#endif // SuMusicDownload_H
