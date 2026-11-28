typedef int s32;

namespace {
struct Registry {
    unsigned char padding_0[0x1B94];
    int slot;
};
}

extern "C" int fn_02f9399c(void*);
extern "C" int fn_03089a30(void);

extern "C" s32 fn_02f93a0c(void *object, void *key) {
    int slot;
    if ((fn_03089a30() != 0 && key != (void *)0xE) || ((Registry *)object)->slot != -1 || (slot = fn_02f9399c(key), slot == -1)) {
        return 0;
    }
    ((Registry *)object)->slot = slot;
    return 1;
}
