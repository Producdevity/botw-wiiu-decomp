typedef int s32;

extern "C" void *data_10467bfc;

namespace {
struct Source {
    char padding_0[0x1DB8];
    s32 mode;
};

struct Target {
    char padding_0[0xB0];
    s32 state;
};
}

extern "C" void fn_02ff5ce0(void *object) {
    if (data_10467bfc != 0) {
        s32 mode = ((Source *)object)->mode;
        if (mode == 0) {
            ((Target *)data_10467bfc)->state = 0;
            return;
        }
        if (mode == 2) {
            ((Target *)data_10467bfc)->state = 1;
            return;
        }
        s32 state = 4;
        if (mode == 1) {
            state = 2;
        }
        ((Target *)data_10467bfc)->state = state;
    }
}
