typedef int s32;

extern "C" int fn_024693d4(void*);
extern "C" int fn_02c19940(void *);

extern "C" s32 fn_0235d768(void **holder) {
    s32 result = 1;

    if (fn_024693d4(holder) == 0) {
        result = fn_02c19940(*holder);
    }
    return result;
}
