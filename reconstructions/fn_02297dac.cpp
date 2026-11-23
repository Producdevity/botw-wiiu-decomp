typedef int s32;

extern "C" int fn_02296aa0(void*);
extern "C" void fn_02297ccc(void*);
extern "C" void fn_0229a2dc(void*);

extern "C" void fn_02297dac(void *arg0) {
    fn_0229a2dc(arg0);
    if (((s32) *(*(s32 **)((char *)(arg0) + (0x28))) == 0) && (fn_02296aa0(arg0) != 0)) {
        fn_02297ccc(arg0);
    }
}
