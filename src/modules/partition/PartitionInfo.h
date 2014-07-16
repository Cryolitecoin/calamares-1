/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
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
#ifndef PARTITIONINFO_H
#define PARTITIONINFO_H

#include <QHash>
#include <QString>

class Partition;

/**
 * Stores Calamares-specific info about a partition.
 * Does not own anything.
 */
struct PartitionInfo
{
    explicit PartitionInfo( Partition* );
    Partition* partition;

    static QString mountPoint( Partition* partition );
    static void setMountPoint( Partition* partition, const QString& value );

    static bool format( Partition* partition );
    static void setFormat( Partition* partition, bool value );
};

#endif /* PARTITIONINFO_H */
