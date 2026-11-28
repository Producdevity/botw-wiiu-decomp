typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" s32 ** fn_03968e94(s32 * *, void *, void *, void *);
extern "C" s32 data_10345738;

extern "C" s32 **fn_03969024(s32 **object, void *param1, void *param2, void *param3) {
    if (object != 0 || (object = (s32 **)fn_0308e578(0xCU), object != 0)) {
        fn_03968e94(object, param1, param2, param3);
        *object = &data_10345738;
    }
    return object;
}
