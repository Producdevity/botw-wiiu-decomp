typedef int s32;

extern "C" void fn_0361f468(void*, void*);

extern "C" void *data_1047b444;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    void **slot;
};
}

extern "C" s32 fn_032643b8(void *object) {
    void **slot;
    void *handle;

    slot = ((Object *)object)->slot;
    handle = *slot;
    if (handle != (void *)-1) {
        *slot = (void *)-1;
        if ((void *)data_1047b444 != 0) {
            fn_0361f468(data_1047b444, handle);
        }
    }
    return 1;
}
