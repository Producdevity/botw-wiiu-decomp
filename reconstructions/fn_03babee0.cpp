typedef int s32;

extern "C" void fn_03ba9428(void*, void*);

namespace {
struct Object {
    char padding_0[0xD0];
    void *owner;
    char padding_d4[0xA0];
    s32 count_a;
    s32 count_b;
};
}

extern "C" void fn_03babee0(void *arg0) {
    void *owner;

    owner = ((Object *)arg0)->owner;
    if (owner != 0) {
        if (((Object *)arg0)->count_b != 0 || ((Object *)arg0)->count_a != 0) {
            fn_03ba9428(owner, arg0);
        }
        ((Object *)arg0)->owner = 0;
    }
}
