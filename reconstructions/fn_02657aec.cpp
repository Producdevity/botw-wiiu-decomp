typedef int s32;

extern "C" void fn_0317f700(void*, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101015f8;

namespace {
struct Owner {
    unsigned char padding_0[0x38C];
    void *effect;
};
}

extern "C" void fn_02657aec(void **arg0) {
    void *effect;

    effect = ((Owner *)*arg0)->effect;
    if (effect != 0) {
        fn_0317f700(effect, 0);
    }
    fn_037b8284(arg0, &data_101015f8, 0);
}
