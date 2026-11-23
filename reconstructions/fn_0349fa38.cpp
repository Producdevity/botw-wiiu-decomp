typedef signed char s8;
typedef int s32;

extern "C" int fn_0349ec24(void*);
extern "C" bool fn_0349ec34(char *, unsigned);
extern "C" unsigned fn_0349f364(void *);

extern "C" s32 fn_0349fa38(s8 *arg0) {
    if (fn_0349ec34((char *)(arg0), 0x40U) != 0) {
        return fn_0349f364(arg0) + 0xD0;
    }
    return fn_0349ec24(arg0) + 0xD0;
}
