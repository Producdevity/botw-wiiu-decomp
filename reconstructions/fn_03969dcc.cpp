typedef int s32;

extern "C" void* fn_0308e578(unsigned size);
extern "C" s32 ** fn_039651a4(s32 * *, void *, void *, void *);

extern "C" s32 data_10345c14;

extern "C" void* fn_03969dcc(void* storage, void* first, void* second, void* third) {
    s32** object = (s32**)storage;

    if (object != 0 || (object = (s32**)fn_0308e578(0xCU), object != 0)) {
        fn_039651a4(object, first, second, third);
        *object = &data_10345c14;
    }
    return object;
}
