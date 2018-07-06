// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VELUM_QT_VELUMADDRESSVALIDATOR_H
#define VELUM_QT_VELUMADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VelumAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VelumAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Velum address widget validator, checks for a valid velum address.
 */
class VelumAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VelumAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // VELUM_QT_VELUMADDRESSVALIDATOR_H
