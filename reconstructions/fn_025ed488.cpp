typedef int s32;

extern "C" void fn_025e9c94(void*, void*);
extern "C" int fn_025ed240(void*);
extern "C" int fn_0378db34(void*);

extern "C" void fn_025ed488(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_025ed240(arg0);
    if (fn_0378db34((void *)temp_r31) != 0) {
        fn_025e9c94(arg0, (void *) temp_r31);
    }
}
