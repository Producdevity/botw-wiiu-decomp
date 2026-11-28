typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" int fn_037b7cac(void *);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101ded30;
extern "C" s32 data_101ded40;

namespace {
typedef s32 (*QueryFn)(void *);

struct Owner {
    char padding_0[0xE8];
    void *const *vtable;
};

struct Object {
    Owner *owner;
    char padding_4[0x10];
    u16 id;
};
}

extern "C" void fn_02d03244(void *object) {
    if (fn_037b7cac(object) != 0) {
        fn_037b7e9c(object, (u32)((Object *)object)->id, 0);
        return;
    }
    Owner *owner = ((Object *)object)->owner;
    if (((QueryFn)owner->vtable[389])(owner) != 0) {
        fn_037b8284(object, &data_101ded30, 0);
        return;
    }
    fn_037b8284(object, &data_101ded40, 0);
}
