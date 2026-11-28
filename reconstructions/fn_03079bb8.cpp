typedef int s32;

extern "C" int fn_02a2d71c(void*);
extern "C" int fn_03079b80(void);
extern "C" char* data_10463798;

extern "C" s32 fn_03079bb8(void) {
    s32 expected;
    s32 result;

    expected = fn_03079b80();
    result = 0;
    if (expected != -1) {
        result = (fn_02a2d71c(data_10463798) ^ expected) == 0;
    }
    return result;
}
