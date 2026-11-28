extern "C" void fn_02d75480(void*);
extern "C" void fn_0378b1f0(void*, void*);
extern "C" void fn_0379884c(void *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x1C];
    char block_20[0x70];
    unsigned char flag_90;
};
}

extern "C" void fn_02d314d4(void *object) {
    if (((Object *)object)->flag_90 != 0) {
        fn_0379884c(((Object *)object)->owner, ((Object *)object)->block_20);
    }
    fn_0378b1f0(((Object *)object)->owner, 0);
    fn_02d75480(((Object *)object)->owner);
}
