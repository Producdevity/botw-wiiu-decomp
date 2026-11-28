typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025e754c(void *, void *);
extern "C" u8 fn_03399fdc(void *);
extern "C" void fn_0348e0e0(void *, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015e86c;

namespace {
typedef s32 (*QueryFn)(void *);

struct Owner {
    char padding_0[0xF4];
    void *component;
};

struct Object {
    Owner *owner;
    char padding_4[8];
    void *const *vtable;
};
}

extern "C" void fn_028fba68(void *object, void *argument) {
    if ((fn_03399fdc(((Object *)object)->owner) != 0) &&
        (((QueryFn)((Object *)object)->vtable[71])(object) == 0)) {
        fn_037b8284(object, &data_1015e86c, 0);
        return;
    }
    void *component = ((Object *)object)->owner->component;
    if (component != 0) {
        fn_0348e0e0(component, 0);
    }
    fn_025e754c(object, argument);
}
