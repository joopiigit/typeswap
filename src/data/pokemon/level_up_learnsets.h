#define LEVEL_UP_MOVE(lvl, moveLearned) {.move = moveLearned, .level = lvl}

static const struct LevelUpMove sBulbasaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 3, MOVE_GROWL),
    LEVEL_UP_MOVE( 7, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE( 9, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(13, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(15, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(19, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(21, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(25, MOVE_GROWTH),
    LEVEL_UP_MOVE(27, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(31, MOVE_WORRY_SEED),
    LEVEL_UP_MOVE(33, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(37, MOVE_SEED_BOMB),
    LEVEL_UP_END
};

