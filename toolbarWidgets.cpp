#include "toolbarWidgets.h"

namespace ToolBarWidgets{
    UI_PushButton::UI_PushButton(param_func Click, int w, int h)
    {
        this->setFixedSize(w,h);
        QObject::connect(this, &QPushButton::clicked,
                         this, Click);
    }
}
