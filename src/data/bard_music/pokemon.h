#ifndef GUARD_DATA_BARD_MUSIC_POKEMON_H
#define GUARD_DATA_BARD_MUSIC_POKEMON_H

const u16 gNumBardWords_Species = NUM_SPECIES;

const struct BardSound gBardSounds_Pokemon[NUM_SPECIES][6] = {
    [SPECIES_NONE] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BULBASAUR] = {
        { .songLengthId = 36 },
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
};

#endif //GUARD_DATA_BARD_MUSIC_POKEMON_H
