// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE]                         = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_BULBASAUR]                    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    
    // Egg         
    [SPECIES_EGG]                          = { .size = MON_COORDS_SIZE(24, 24), .y_offset = 20 },

};
