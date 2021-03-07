#pragma once
#include "../../version.h"
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
#define PAGE_WIDTH 320
#define PAGE_HEIGHT 240
#ifdef HW_M5PAPER
    #define PAG_BLACK 15 
    #define PAG_WHITE 0
    #define PAG_FOREGND PAG_BLACK
    #define PAG_BACKGND PAG_WHITE
#endif
#ifdef HW_M5CORE2
    #define PAG_BLACK 0x0000
    #define PAG_WHITE 0xFFFF
    #define PAG_FOREGND PAG_WHITE
    #define PAG_BACKGND PAG_BLACK
#endif
#ifdef HW_M5CORE
    #define PAG_BLACK 0x0000
    #define PAG_WHITE 0xFFFF
    #define PAG_FOREGND PAG_WHITE
    #define PAG_BACKGND PAG_BLACK
#endif

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
