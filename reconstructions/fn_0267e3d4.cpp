typedef int s32;

extern "C" void fn_0370de48(void*, int);
extern "C" void fn_0370e02c(void*);

namespace {
struct Owner {
    char padding_0[0x330];
    s32 active;
    char padding_334[0x60];
    void *handle;
};
}

extern "C" void fn_0267e3d4(void **object) {
    Owner *owner;
    void *handle;

    owner = (Owner *)*object;
    if ((owner != 0) && ((s32) owner->active != 0)) {
        handle = owner->handle;
        if (handle != 0) {
            fn_0370e02c(handle);
            fn_0370de48(owner->handle, 1);
        }
    }
}
