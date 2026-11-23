typedef signed char s8;
typedef int s32;

struct Base;
struct Owner;
extern "C" void* fn_02b62bc8(void*);

extern "C" void fn_026f2360(void *arg0) {
    void* const* vt1;
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = fn_02b62bc8((*(struct Owner **)((char *)(arg0) + (0))));
    if ((temp_r3 != 0) && ((temp_r3_2 = ((s32 (*)())(vt1 = *(void* const**)((char *)(temp_r3) + (0x1C)))[17])(), ((temp_r3_2 == 0x1F) != 0)) || (temp_r3_2 == 0x1E))) {
        (*(s8 *)((char *)(arg0) + (0x8C))) = 1;
    }
}
