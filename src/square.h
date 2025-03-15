#pragma once
#include <SDL2/SDL.h>

#include "colors.h"
#include "piece.h"

class Square {
    private:
        int x, y, size;
        Color color;
        SDL_Renderer* m_renderer;
        bool empty;
        Piece* piece;

    public:
        Square();
        Square(int x, int y, int size, Color color, SDL_Renderer* renderer);
        ~Square();
        void set_values(int x, int y, int size, Color color,
                        SDL_Renderer* renderer);

        void draw();
        void setPiece(Piece* Piece);
        void clearPiece();
};
