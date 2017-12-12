/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2017, Adriaan de Groot <groot@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLASMALNFPAGE_H
#define PLASMALNFPAGE_H

#include <QList>
#include <QString>
#include <QStringList>
#include <QWidget>

#include "ThemeInfo.h"

namespace Ui
{
class PlasmaLnfPage;
}

class PlasmaLnfPage : public QWidget
{
    Q_OBJECT
public:
    explicit PlasmaLnfPage( QWidget* parent = nullptr );

    void setLnfPath( const QString& path );
    void setEnabledThemes( const ThemeInfoList& themes );

public slots:
    void activated( int index );

signals:
    void plasmaThemeSelected( const QString& id );

private:
    /** @brief Intersect the list of enabled themes with the installed ones. */
    void winnowThemes();
    /** @brief Get the translated names for all enabled themes. */
    void updateThemeNames();
    /** @brief show enabled themes in the UI. */
    void fillUi();

    Ui::PlasmaLnfPage* ui;
    QString m_lnfPath;
    ThemeInfoList m_enabledThemes;
};

#endif //PLASMALNFPAGE_H