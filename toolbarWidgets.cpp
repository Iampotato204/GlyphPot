#include "toolbarWidgets.h"

namespace ToolBarWidgets{
    UI_PushButton::UI_PushButton(param_func Click, int w, int h)
    {
        this->setFixedSize(w,h);
        QObject::connect(this, SIGNAL(clicked(bool)),
                         this, SLOT(UI_PushButton::onClick(Click)));
    }
}
