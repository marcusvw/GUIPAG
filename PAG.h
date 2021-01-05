#pragma once
#include <Arduino.h>
/**
 * Abstract Class for GUI Page
 * Areas for M5Core2 Size is 320x215
 * **/
typedef struct
{
    int16_t x;
    int16_t y;
} PAG_pos_t;

class Page
{
    protected:
    bool active=false;
    PAG_pos_t canvas_pos;
    public:
    virtual void activate();
    virtual void deActivate();
    virtual void draw();
    virtual void handleInput(PAG_pos_t pos);
    virtual void middleButtonPushed();
    virtual String getHeader();   
};
