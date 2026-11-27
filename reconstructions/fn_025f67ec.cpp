typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0370e3bc(void *, int, int);

namespace {
struct Owner {
    char padding_0[0x394];
    void *component;
};
struct Object {
    Owner *owner;
    char padding_4[0x20];
    s32 *key;
};
}

extern "C" u8 fn_025f67ec(void *arg0) {
    void *component;
    s32 result;

    component = ((Object *)arg0)->owner->component;
    result = 0;
    if (component != 0 && fn_0370e3bc(component, *((Object *)arg0)->key, 0) != 0) {
        result = 1;
    }
    return result;
}
