//
// Created by PoriaKP on 1/18/2022.
//

#ifndef MYF_MAIN_H
#define MYF_MAIN_H
#define MAX_TILES 35
#include <SDL_quit.h>

typedef struct tile{
    int width;
    int height;
    Sint16 x1,x2;
    Sint16 y1,y2;
    Uint32 color;
    Sint16 x_o,y_o;
    Sint16 r;
    int team;
}tile;
typedef struct map{
    tile tiles[MAX_TILES];
}map;
#endif //MYF_MAIN_H