#ifndef OBJECT_H
#define OBJECT_H

#include "Engine/vector.h"

#include <QPainter>

class Editor;

class Object
{
protected:
    Editor* const m_widget;
private:
    bool m_is_selected;
    Vector m_pos;

public:
    Object(Editor* const);
    virtual ~Object();

    virtual void draw(QPainter&) const = 0;
    virtual bool isClose(const QPoint&) = 0;
    virtual bool intersects(const QRect&) const = 0;

    virtual void setPos(const Vector&);
    virtual void movePos(const Vector&);
    void setSelected(bool);

    bool isSelected() const;
    Vector pos() const;
};

#endif // OBJECT_H
