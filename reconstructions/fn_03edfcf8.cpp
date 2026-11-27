typedef int s32;

namespace {
struct Entry {
    char padding_0[8];
    char link[4];
    void *owner;
    char padding_10[0x14];
    s32 state;
    char padding_28[4];
    s32 index;
};
}

extern "C" void fn_03ef84ac(void*, void*);
extern "C" void fn_03ef8510(void*, void*);

extern "C" void fn_03edfcf8(void *object) {
    void *owner = ((Entry *)object)->owner;
    if (owner != 0) {
        fn_03ef84ac(owner, ((Entry *)object)->link);
        fn_03ef8510(((Entry *)object)->owner, ((Entry *)object)->link);
    }
    ((Entry *)object)->state = 0;
    ((Entry *)object)->index = -1;
}
