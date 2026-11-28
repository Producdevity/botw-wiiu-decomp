typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" s32 ** fn_039651a4(s32 * *, void *, void *, void *);
extern "C" s32 data_103444f0;

extern "C" s32 **fn_03965bcc(s32 **memory, void *first, void *second, void *third) {
    s32 **object = memory;
    if (object != 0 || (object = (s32 **)fn_0308e578(0xCU)) != 0) {
        fn_039651a4(object, first, second, third);
        *object = &data_103444f0;
    }
    return object;
}
