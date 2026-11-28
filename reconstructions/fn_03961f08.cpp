typedef int s32;

extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_039461dc(void*, void*, void*, void*);

extern "C" s32 data_103438c8;

extern "C" void* fn_03961f08(void* storage, void* first, void* second, void* third) {
    s32** object = (s32**)storage;

    if (object != 0 || (object = (s32**)fn_0308e578(0xCU), object != 0)) {
        fn_039461dc(object, first, second, third);
        *object = &data_103438c8;
    }
    return object;
}
