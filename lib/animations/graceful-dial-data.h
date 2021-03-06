#ifndef GRACEFUL_DIAL_DATA_H
#define GRACEFUL_DIAL_DATA_H

#include "graceful-export.h"
#include "graceful-widget-state-data.h"

namespace Graceful
{
//* dial data
class GRACEFUL_EXPORT DialData : public WidgetStateData
{
    Q_OBJECT
public:
    DialData(QObject *parent, QWidget *target, int);

    virtual ~DialData()
    {

    }

    //* event filter
    virtual bool eventFilter(QObject *, QEvent *);

    //* subcontrol rect
    virtual void setHandleRect(const QRect &rect)
    {

        _handleRect = rect;
    }

    //* mouse position
    QPoint position() const
    {

        return _position;
    }

protected:
    //* hoverMoveEvent
    virtual void hoverMoveEvent(QObject *, QEvent *);

    //* hoverMoveEvent
    virtual void hoverLeaveEvent(QObject *, QEvent *);

private:
    //* rect
    QRect _handleRect;

    //* mouse position
    QPoint _position;
};

}

#endif
