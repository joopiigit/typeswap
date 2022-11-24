
#define PIKACHU_BACK_PIC_COORDS         \
{                                       \
    .size = MON_COORDS_SIZE(64, 56),    \
    .y_offset = 4,                      \
}

#define ARCEUS_BACK_PIC_COORDS          \
{                                       \
    .size = MON_COORDS_SIZE(64, 64),    \
    .y_offset = 3,                      \
}

#define DEERLING_BACK_PIC_COORDS        \
{                                       \
    .size = MON_COORDS_SIZE(48, 56),    \
    .y_offset = 9,                      \
}

// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonBackPicCoords[] =
{
    [SPECIES_NONE]                         = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_BULBASAUR]                    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    
    [SPECIES_EGG]                          = { .size = MON_COORDS_SIZE(24, 24), .y_offset = 20 },
};
