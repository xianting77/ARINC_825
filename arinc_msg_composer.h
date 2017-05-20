#ifndef ARINC_MSG_COMPOSER_H
#define ARINC_MSG_COMPOSER_H

#include <QWidget>
#include <profile.h>

namespace Ui {
class ARINC_MSG_composer;
}

class ARINC_MSG_composer : public QWidget
{
    Q_OBJECT

public:
    explicit ARINC_MSG_composer(QWidget *parent = 0);
    ~ARINC_MSG_composer();

    void fillParameters(Profile* profile);

private:
    Ui::ARINC_MSG_composer *ui;
};

#endif // ARINC_MSG_COMPOSER_H
