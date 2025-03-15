#pragma once

#include <SDL2/SDL.h>
#include "pawn.h"
#include "king.h"
#include "queen.h"
#include "square.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"

class Board {
    private:
        int width, height;
        SDL_Renderer* m_renderer;
        SDL_Surface* m_windowSurface;
        Square S[64];

        Pawn P[16];
        King K[2];
        Queen Q[2];
        Rook R[4];
        Knight KN[4];
        Bishop B[4];

    public:
        Board(int width, int height, SDL_Window* window);
        ~Board();
        void draw();
};
