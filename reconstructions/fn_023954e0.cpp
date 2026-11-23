typedef int s32;

extern "C" int fn_022bfb50(void*);
extern "C" int fn_0344a464(void *);
extern "C" int fn_03794838(void *, void *, void *);
extern "C" void* fn_037966a8(void *);

extern "C" s32 fn_023954e0(void **arg0) {
    void *temp_r3;

    if ((fn_03794838(arg0, 0, 0) != 0) && ((fn_022bfb50(arg0) != 0) || ((temp_r3 = fn_037966a8(*arg0), ((temp_r3 == 0) == 0)) && (fn_0344a464(temp_r3) == 0)))) {
        return 1;
    }
    return 0;
}
