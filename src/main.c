#include <Arduino.h>
#include "VGAX.h"
#include "space_invaders.h.h"

#undef main

int main(int argc, char* argv) {
    VGAX::begin();
    init_game();

    loop_game();
}