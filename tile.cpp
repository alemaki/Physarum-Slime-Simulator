#include "tile.hpp"

Tile::Tile()
{
    this->current_hue = 0;
}

int Tile::get_current_hue()
{ 
    return current_hue;
}

void Tile::refresh_hue()
{
    this->current_hue = get_max_hue();
}

void Tile::update()
{
    if (this->current_hue > 0)
    {
        current_hue--;
    }
}
