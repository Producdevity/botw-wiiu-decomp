typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030b70fc(void*);

extern "C" s32 data_10332eec;

extern "C" s32 **fn_038d4df4(s32 **object) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(0x14U)), ((result == 0) == 0))) {
        fn_030b70fc(result);
        *result = &data_10332eec;
    }
    return result;
}
