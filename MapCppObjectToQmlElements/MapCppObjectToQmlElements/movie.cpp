#include <QObject>
#include <QDebug>
#include "movie.h"

Movie::Movie(QObject *parent) : QObject(parent),
    m_title("Movie title"),
    m_mainCharacter("Main Character")
{

}

QString Movie::title() const
{
    qDebug() << "Getting the title";
    return m_title;
}

QString Movie::mainCharacter() const
{
    qDebug() << "Getting the character";
    return m_mainCharacter;
}

void Movie::setTitle(QString title)
{
    if (m_title == title)
        return;

    qDebug() << "Setting the title";
    m_title = title;
    emit titleChanged(m_title);
}

void Movie::setMainCharacter(QString mainCharacter)
{
    if (m_mainCharacter == mainCharacter)
        return;

    qDebug() << "Setting the character";
    m_mainCharacter = mainCharacter;
    emit mainCharacterChanged(m_mainCharacter);
}
