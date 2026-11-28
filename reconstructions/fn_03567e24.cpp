typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" char* data_1047c390;

extern "C" f32 data_102e32b8;
extern "C" f32 data_102e3360;

namespace {
struct Player {
    char padding_0[0x58];
    u8 locked;
    char padding_59[0x8C - 0x59];
    f32 charge;
};

struct Manager {
    char padding_0[0x1C];
    Player *player;
};

struct Object {
    char padding_0[0x458];
    f32 distance;
};
}

extern "C" s32 fn_03567e24(void *object) {
    Player *player = ((Manager *)data_1047c390)->player;

    if (((player != 0) && ((player->locked != 0) || !(player->charge > data_102e3360))) || !(((Object *)object)->distance < data_102e32b8)) {
        return 0;
    }
    return 1;
}
