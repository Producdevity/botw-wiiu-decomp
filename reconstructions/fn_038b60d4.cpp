typedef int s32;
typedef float f32;

extern "C" void fn_033e2f30(void*, void*);
extern "C" const float data_10331a10;

namespace {
struct Owner {
    char padding_0[0x40];
    s32 base;
    char padding_44[0x78];
    void *entry;
    f32 value;
};
}

extern "C" void fn_038b60d4(void *object) {
    Owner *owner = (Owner *)object;
    void *entry;

    entry = owner->entry;
    if (entry != 0) {
        fn_033e2f30((void *)(owner->base + 0x448), entry);
        owner->entry = 0;
    }
    owner->value = (f32) data_10331a10;
}
