typedef unsigned char u8;

namespace {
struct Owner {
    char padding_0[0x38C];
    void *component;
};

struct Object {
    Owner *owner;
    char padding_4[0x2B4];
    u8 *flag;
};
}

extern "C" void fn_025c7b60(void * *);
extern "C" void fn_0317f7bc(void*, void*);

extern "C" void fn_026ae0f0(void **object) {
    void *component;
    fn_025c7b60(object);
    if (*((Object *)object)->flag != 0) {
        component = ((Object *)object)->owner->component;
        if (component != 0) {
            fn_0317f7bc(component, 0);
        }
    }
}
