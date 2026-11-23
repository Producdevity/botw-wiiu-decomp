typedef int s32;

extern "C" int fn_02bb7560(void*);
extern "C" int fn_02bb7580(void*);
extern "C" void fn_02bb75a0(void*);

extern "C" void fn_02bb75e4(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_02bb7560(arg0);
    if ((temp_r31 | fn_02bb7580(arg0)) != 0) {
        fn_02bb75a0(arg0);
    }
}
