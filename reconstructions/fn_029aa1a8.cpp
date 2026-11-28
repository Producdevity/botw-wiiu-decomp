extern "C" void fn_0378da14(void *);
extern "C" bool fn_0378da88(void *);
extern "C" void fn_0378dc60(int, int);

namespace {
struct Handle {
    char data[12];
};

struct Object {
    char padding_0[0x24];
    Handle current;
    Handle first;
    Handle second;
};
}

extern "C" void fn_029aa1a8(void *object) {
    Handle *slot;
    if (fn_0378da88(&((Object *)object)->current) != 0) {
        slot = &((Object *)object)->first;
        if (fn_0378da88(slot) == 0) {
            fn_0378dc60((int)slot, (int)&((Object *)object)->current);
        } else {
            slot = &((Object *)object)->second;
            if (fn_0378da88(slot) == 0) {
                fn_0378dc60((int)slot, (int)&((Object *)object)->current);
            }
        }
        fn_0378da14(&((Object *)object)->current);
    }
}
