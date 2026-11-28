typedef int s32;

extern "C" void fn_0304aca8(void*, void*);
extern "C" void fn_030be630(void*, void*);
extern "C" int fn_03a40780(void);
extern "C" void* data_1046bdd8;

namespace {
struct Globals {
    unsigned char padding_0[0x40688];
    void *context;
};
}

extern "C" s32 fn_0300ba84(void) {
    s32 created;

    created = fn_03a40780();
    if (created != 0) {
        fn_030be630((void *) created, ((Globals *)data_1046bdd8)->context);
        fn_0304aca8(data_1046bdd8, (void *) created);
    }
    return created;
}
