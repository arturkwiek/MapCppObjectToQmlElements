#ifndef MOVIE_H
#define MOVIE_H

#include <QObject>

class Movie : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString mainCharacter READ mainCharacter WRITE setMainCharacter NOTIFY mainCharacterChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)

public:
    explicit Movie(QObject *parent = nullptr);

QString title() const;
QString mainCharacter() const;

public slots:
void setTitle(QString title);
void setMainCharacter(QString mainCharacter);

signals:

void titleChanged(QString title);
void mainCharacterChanged(QString mainCharacter);

private:
QString m_title;
QString m_mainCharacter;

};

#endif // MOVIE_H
