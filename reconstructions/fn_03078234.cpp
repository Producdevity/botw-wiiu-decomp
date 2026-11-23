typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02f122c0(void *, unsigned);
extern "C" int fn_030801d8(int, int);

extern "C" void fn_03078234(u32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_030801d8(0x2E, 1);
    if (temp_r3 != 0) {
        fn_02f122c0((void *) temp_r3, arg0);
    }
}
