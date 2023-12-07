#ifndef TOOLBAR_WIDGETS
#define TOOLBAR_WIDGETS

namespace ToolBarWidgets {
class UI_PushButton: public QPushbutton{
private:
    static int _width=50, _heigth=50;
public:
    void setDefaultSize(int w, int h);
    //UI_PushButton();
    UI_PushButton(std::function<void()> Click);
};
}

#endif // TOOLBAR_WIDGETS
