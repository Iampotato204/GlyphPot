#ifndef TOOLBAR_WIDGETS
#define TOOLBAR_WIDGETS
#include <QPushButton>
//#define param_func(x) std::function<int(int x)>
//#define param_func std::function<int()>
typedef std::function<int()> param_func;

namespace ToolBarWidgets {
class UI_PushButton: public QPushButton{
private:
    const static int
        UI_BUTTON_WIDTH_DEFAULT=50,
        UI_BUTTON_HEIGHT_DEFAULT=50;
    static int _width, _heigth;//50,50
public:
    void setDefaultSize(int w, int h);
    //UI_PushButton();
    //UI_PushButton(std::function<void()> Click);
    //UI_PushButton(std::function<void()> Click, int width=UI_BUTTON_WIDTH_DEFAULT, int height=UI_BUTTON_HEIGHT_DEFAULT);
    UI_PushButton(param_func lambda, int width=UI_BUTTON_WIDTH_DEFAULT, int height=UI_BUTTON_HEIGHT_DEFAULT);
};
}

#endif // TOOLBAR_WIDGETS
