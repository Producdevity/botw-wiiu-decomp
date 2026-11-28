typedef int s32;

extern "C" void fn_03b9fc80(void*, unsigned int, int);

namespace {
struct Slots {
    char padding_0[0x44];
    void *target;
};

struct Object {
    char padding_0[0x398];
    Slots *slots;
};
}

extern "C" s32 fn_0359c098(void *object, unsigned int index, int value) {
    Slots *slots = ((Object *)object)->slots;

    if (slots != 0) {
        void *target = slots->target;
        if (target != 0) {
            fn_03b9fc80(target, index, value);
            return 1;
        }
    }
    return 0;
}
