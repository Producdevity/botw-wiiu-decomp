typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_028fa8f8(void*);
extern "C" void fn_02b7b744(void *);
extern "C" void fn_0317be7c(void *);
extern "C" void fn_0317f700(void *, int);
extern "C" void fn_0317f94c(void *, float);

extern "C" f32 data_1015e4d8;

namespace {
struct Owner {
    char padding_0[0x38C];
    void *component;
};

struct Object {
    Owner *owner;
    char padding_4[0x6C];
    u8 hidden;
};
}

extern "C" void fn_028fa9dc(void *object) {
    void *component = ((Object *)object)->owner->component;
    if (component != 0) {
        if (((Object *)object)->hidden == 0) {
            fn_0317f94c(component, data_1015e4d8);
            fn_0317be7c(component);
        } else {
            fn_0317f700(component, 0);
        }
    }
    fn_028fa8f8(object);
    fn_02b7b744(((Object *)object)->owner);
}
