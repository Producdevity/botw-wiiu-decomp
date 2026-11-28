typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" s32 ** fn_039651a4(s32 * *, void *, void *, void *);
extern "C" s32 data_10344ec0;

extern "C" s32 **fn_03967594(s32 **memory, void *arg1, void *arg2, void *arg3) {
    s32 **object;

    object = memory;
    if ((object != 0) || (object = (s32 **)(fn_0308e578(0xcU)), ((object == 0) == 0))) {
        fn_039651a4(object, arg1, arg2, arg3);
        *object = &data_10344ec0;
    }
    return object;
}
