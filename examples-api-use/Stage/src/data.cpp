//
//  data.c
//  SupersignSimulator
//
//  Created by OKAYA YOHEI on 2017/05/05.
//
//

#include "../inc/data.h"

std::array<std::array<DisplayInfo, windowWidth>, windowHeight> hajime = {{
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}},
    {{{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255},{0, 0, 0, 255}}}
}};



