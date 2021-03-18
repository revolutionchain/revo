#ifndef REVOPUSHBUTTON_H
#define REVOPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class RevoPushButton : public QPushButton
{
public:
    explicit RevoPushButton(QWidget * parent = Q_NULLPTR);
    explicit RevoPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // REVOPUSHBUTTON_H
