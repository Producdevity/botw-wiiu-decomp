extern "C" int fn_0294fbc0(void);

extern "C" float data_1016d398;

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void* const* vtable;
};
struct Target {
    char padding_0[0x180];
    float value;
};
}

extern "C" float fn_0294fd20(void) {
    int instance = fn_0294fbc0();
    if (instance != 0) {
        Target *target = ((Target *(*)())((VirtualObject*)instance)->vtable[195])();
        if (target != 0) {
            return target->value;
        }
    }
    return data_1016d398;
}
