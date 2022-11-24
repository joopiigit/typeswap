static const union AnimCmd sAnim_NONE_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BULBASAUR_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_NONE[] =
{
    sAnim_GeneralFrame0,
    sAnim_NONE_1,
};

static const union AnimCmd *const sAnims_BULBASAUR[] =
{
    sAnim_GeneralFrame0,
    sAnim_BULBASAUR_1,
};

#define ANIM_CMD(name)             [SPECIES_##name] = sAnims_##name
#define ANIM_CMD_FULL(name, anims) [SPECIES_##name] = anims

const union AnimCmd *const *const gMonFrontAnimsPtrTable[] =
{
    ANIM_CMD(NONE),
    ANIM_CMD(BULBASAUR),
    
    ANIM_CMD(EGG),
};

#undef ANIM_CMD
#undef ANIM_CMD_FULL
