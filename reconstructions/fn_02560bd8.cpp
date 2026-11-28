typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

extern "C" int fn_02b62774(void*);
extern "C" void* data_10463748;

extern "C" f32 data_100dfcec;

namespace {
struct Manager {
    char padding_0[0x14];
    s32 side;
    char padding_18[0xA80 - 0x18];
    u32 flags[2];
    char padding_a88[0xA98 - 0xA88];
    f32 value;
};

struct Object {
    char padding_0[0x20];
    u8 *state;
};
}

extern "C" s32 fn_02560bd8(void *object) {
    Manager *manager = (Manager *)data_10463748;

    if ((manager == 0) || (*((Object *)object)->state == 0) || (fn_02b62774(object) != 0) || ((manager->flags[manager->side ^ 1] >> 2U) & 1) || !(manager->value > data_100dfcec)) {
        return 1;
    }
    return 0;
}
