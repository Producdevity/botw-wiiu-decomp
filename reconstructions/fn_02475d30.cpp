extern "C" void fn_02b27174(void *arg0);

namespace {
struct Slot {
    char data[0x16C];
    int active;
    char padding_170[4];
};

struct Object {
    char padding_0[0xEE8];
    Slot slots[3];
};
}

extern "C" void fn_02475d30(void* object) {
    if (((Object *)object)->slots[0].active != 0) {
        fn_02b27174(((Object *)object)->slots[0].data);
    }
    if (((Object *)object)->slots[1].active != 0) {
        fn_02b27174(((Object *)object)->slots[1].data);
    }
    if (((Object *)object)->slots[2].active != 0) {
        fn_02b27174(((Object *)object)->slots[2].data);
    }
}
