typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b616bc(void *, void *);
extern "C" int fn_02b61950(void*, void*);
extern "C" void fn_0370e02c(void*);

namespace {
struct Owner {
    char padding_0[0x394];
    void *handle;
};

struct Object {
    Owner *owner;
    char padding_4[0x30];
    char member[0x10];
    u8 enabled;
};
}

extern "C" void fn_02351034(void *object) {
    void *handle;

    if ((s32) ((Object *)object)->enabled != 0) {
        fn_02b616bc(((Object *)object)->member, (void *)(fn_02b61950(((Object *)object)->member, ((Object *)object)->owner)));
    }
    handle = ((Object *)object)->owner->handle;
    if (handle != 0) {
        fn_0370e02c(handle);
    }
}
