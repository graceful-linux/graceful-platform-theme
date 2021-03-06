#ifndef GRACEFUL_ANIMATION_H
#define GRACEFUL_ANIMATION_H

#include "graceful.h"
#include "graceful-export.h"

#include <QVariant>
#include <QPropertyAnimation>

namespace Graceful
{
class GRACEFUL_EXPORT Animation : public QPropertyAnimation
{
    Q_OBJECT
public:
    //* convenience
    using Pointer = WeakPointer<Animation>;

    //* constructor
    Animation(int duration, QObject *parent) : QPropertyAnimation(parent)
    {

        setDuration(duration);
    }

    //* destructor
    virtual ~Animation() = default;

    //* true if running
    bool isRunning() const
    {

        return state() == Animation::Running;
    }

    void restart()
    {

        if (isRunning()) {
            stop();
        }

        start();
    }
};

}

#endif
