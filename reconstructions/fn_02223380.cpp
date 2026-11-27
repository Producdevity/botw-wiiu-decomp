typedef int s32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x24];
    s32 count;
};
}

extern "C" void fn_02b5bb34(void*);
extern "C" void fn_02b5dab8(void);
extern "C" void fn_02b74ac8(void *);

extern "C" void fn_02223380(void *object) {
    void *owner = ((Object *)object)->owner;
    if (((Object *)object)->count > 0) {
        ((Object *)object)->count = 0;
        fn_02b5bb34(owner);
        fn_02b5dab8();
    }
    fn_02b74ac8(owner);
}
