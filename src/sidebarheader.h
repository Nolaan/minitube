/* $BEGIN_LICENSE

This file is part of Minitube.
Copyright 2009, Flavio Tordini <flavio.tordini@gmail.com>

Minitube is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Minitube is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Minitube.  If not, see <http://www.gnu.org/licenses/>.

$END_LICENSE */

#ifndef SIDEBARHEADER_H
#define SIDEBARHEADER_H

#include <QtGui>
#if QT_VERSION >= 0x050000
#include <QtWidgets>
#endif

class SidebarHeader : public QToolBar {

    Q_OBJECT

public:
    SidebarHeader(QWidget *parent = 0);
    void updateInfo();

protected:
    QSize minimumSizeHint() const;
    void paintEvent(QPaintEvent *event);

private slots:
    void updateTitle(const QString &title);

private:
    void setup();
    void setTitle(const QString &title);

    QAction *backAction;
    QAction *forwardAction;
    QString title;
    QList<QAction*> videoSourceActions;
};

#endif // SIDEBARHEADER_H
