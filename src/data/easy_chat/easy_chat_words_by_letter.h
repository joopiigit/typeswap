#include "easy_chat.h"

#define DOUBLE_SPECIES_NAME EC_EMPTY_WORD, 2,

const u16 gEasyChatWordsByLetter_Others[] = {
    EC_WORD_EXCL,
};

const u16 gEasyChatWordsByLetter_A[] = {
    EC_WORD_A,
};

const u16 gEasyChatWordsByLetter_B[] = {
    EC_WORD_BABE,
};

const u16 gEasyChatWordsByLetter_C[] = {
    EC_POKEMON(BULBASAUR),
};

const u16 gEasyChatWordsByLetter_D[] = {
    EC_WORD_DAILY,
};

const u16 gEasyChatWordsByLetter_E[] = {
    EC_WORD_EARLIER,
};

const u16 gEasyChatWordsByLetter_F[] = {
    EC_WORD_FABULOUS,
};

const u16 gEasyChatWordsByLetter_G[] = {
    EC_WORD_GAME,
};

const u16 gEasyChatWordsByLetter_H[] = {
    EC_WORD_HABIT,
};

const u16 gEasyChatWordsByLetter_I[] = {
    EC_WORD_I,
};

const u16 gEasyChatWordsByLetter_J[] = {
    EC_WORD_JOY,
};

const u16 gEasyChatWordsByLetter_K[] = {
    EC_WORD_KEEN_EYE,
};

const u16 gEasyChatWordsByLetter_L[] = {
    EC_WORD_LACKING,
};

const u16 gEasyChatWordsByLetter_M[] = {
    EC_WORD_MACHINE,
};

const u16 gEasyChatWordsByLetter_N[] = {
    EC_WORD_NAME,
};

const u16 gEasyChatWordsByLetter_O[] = {
    EC_WORD_OBLIVIOUS,
};

const u16 gEasyChatWordsByLetter_P[] = {
    EC_WORD_PARDON,
};

const u16 gEasyChatWordsByLetter_Q[] = {
    EC_WORD_QUITE,
};

const u16 gEasyChatWordsByLetter_R[] = {
    EC_WORD_RADIO,
};

const u16 gEasyChatWordsByLetter_S[] = {
    EC_WORD_SAD,
};

const u16 gEasyChatWordsByLetter_T[] = {
    EC_WORD_TAKE,
};

const u16 gEasyChatWordsByLetter_U[] = {
    EC_WORD_UGLY,
};

const u16 gEasyChatWordsByLetter_V[] = {
    EC_WORD_VACATION,
};

const u16 gEasyChatWordsByLetter_W[] = {
    EC_WORD_WAAAH,
};

const u16 gEasyChatWordsByLetter_X[] = {
    EC_WORD_YAHOO,
};

const u16 gEasyChatWordsByLetter_Y[] = {
    EC_WORD_YAHOO,
};

const u16 gEasyChatWordsByLetter_Z[] = {
    EC_MOVE2(ZAP_CANNON),
};


const struct EasyChatWordsByLetter gEasyChatWordsByLetterPointers[EC_NUM_ALPHABET_GROUPS + 18] = { // 18 unused JP groups
    {
        .words = gEasyChatWordsByLetter_Others,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_Others),
    },
    {
        .words = gEasyChatWordsByLetter_A,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_A),
    },
    {
        .words = gEasyChatWordsByLetter_B,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_B),
    },
    {
        .words = gEasyChatWordsByLetter_C,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_C),
    },
    {
        .words = gEasyChatWordsByLetter_D,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_D),
    },
    {
        .words = gEasyChatWordsByLetter_E,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_E),
    },
    {
        .words = gEasyChatWordsByLetter_F,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_F),
    },
    {
        .words = gEasyChatWordsByLetter_G,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_G),
    },
    {
        .words = gEasyChatWordsByLetter_H,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_H),
    },
    {
        .words = gEasyChatWordsByLetter_I,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_I),
    },
    {
        .words = gEasyChatWordsByLetter_J,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_J),
    },
    {
        .words = gEasyChatWordsByLetter_K,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_K),
    },
    {
        .words = gEasyChatWordsByLetter_L,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_L),
    },
    {
        .words = gEasyChatWordsByLetter_M,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_M),
    },
    {
        .words = gEasyChatWordsByLetter_N,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_N),
    },
    {
        .words = gEasyChatWordsByLetter_O,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_O),
    },
    {
        .words = gEasyChatWordsByLetter_P,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_P),
    },
    {
        .words = gEasyChatWordsByLetter_Q,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_Q),
    },
    {
        .words = gEasyChatWordsByLetter_R,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_R),
    },
    {
        .words = gEasyChatWordsByLetter_S,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_S),
    },
    {
        .words = gEasyChatWordsByLetter_T,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_T),
    },
    {
        .words = gEasyChatWordsByLetter_U,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_U),
    },
    {
        .words = gEasyChatWordsByLetter_V,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_V),
    },
    {
        .words = gEasyChatWordsByLetter_W,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_W),
    },
    {
        .words = gEasyChatWordsByLetter_X,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_X),
    },
    {
        .words = gEasyChatWordsByLetter_Y,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_Y),
    },
    {
        .words = gEasyChatWordsByLetter_Z,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_Z),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseHi,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseHi),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseFu,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseFu),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseHe,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseHe),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseHo,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseHo),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseMa,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseMa),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseMi,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseMi),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseMu,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseMu),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseMe,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseMe),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseMo,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseMo),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseYa,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseYa),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseYu,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseYu),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseYo,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseYo),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseRa,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseRa),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseRi,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseRi),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseRu,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseRu),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseRe,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseRe),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseRo,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseRo),
    },
    {
        .words = gEasyChatWordsByLetter_UnusedJapaneseWa,
        .numWords = ARRAY_COUNT(gEasyChatWordsByLetter_UnusedJapaneseWa),
    },
};
