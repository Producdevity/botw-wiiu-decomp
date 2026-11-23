typedef int s32;

extern "C" int fn_0359ca44(void*, void*, void*, void*, void*);
extern "C" void fn_03b9f5f0(void*);

extern "C" void fn_0357f634(s32 *arg0, void *arg1, void *arg2, void *arg3) {
    s32 temp_r3;

    if (arg1 != 0) {
        temp_r3 = fn_0359ca44(arg1, arg3, 0, 0, arg2);
        *arg0 = temp_r3;
        if (temp_r3 != 0) {
            fn_03b9f5f0((void *) temp_r3);
        }
    }
}
