typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030cb670(void*);

extern "C" s32 data_1031e048;

extern "C" s32 **fn_037d9990(s32 **object) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(0x78U)), ((result == 0) == 0))) {
        fn_030cb670(result);
        *result = &data_1031e048;
    }
    return result;
}
