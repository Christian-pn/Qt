#ifndef ADDRESSBOOKCONTROLLER_H
#define ADDRESSBOOKCONTROLLER_H

#include "addressbook.h"

#include <QObject>

class AddressBookController
{
    Q_OBJECT
public:
    explicit AddressBookController(AddressBook *addressBook, QObject *parent = 0 );


signals:

public slots:

private:

    AddressBook *m_addressBook;

};

#endif // ADDRESSBOOKCONTROLLER_H
