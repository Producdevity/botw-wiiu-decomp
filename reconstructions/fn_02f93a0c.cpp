typedef int s32;

namespace {
struct Registry {
    unsigned char padding_0[0x1B94];
    int slot;
};
}

extern "C" int fn_02f9399c(void*);
extern "C" int fn_03089a30(void);

extern "C" s32 fn_02f93a0c(void *arg0, void *arg1) {
    int slot;
    if ((fn_03089a30() != 0 && arg1 != (void *)0xE) || ((Registry *)arg0)->slot != -1 || (slot = fn_02f9399c(arg1), slot == -1)) {
        return 0;
    }
    ((Registry *)arg0)->slot = slot;
    return 1;
}
