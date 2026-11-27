typedef unsigned u32;

extern "C" void fn_02f122c0(void *, unsigned);
extern "C" int fn_030801d8(int, int);

extern "C" void fn_03078234(u32 value) {
    int object = fn_030801d8(0x2E, 1);
    if (object != 0) {
        fn_02f122c0((void *)object, value);
    }
}
