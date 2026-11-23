typedef int s32;

extern "C" int fn_0206b824(void*, void*);
extern "C" void fn_020f22bc(void*);
extern "C" void fn_03485f68(void*);

extern "C" void fn_0206b9f4(void *arg0) {
    s32 temp_r3;

    fn_020f22bc(arg0);
    temp_r3 = fn_0206b824(arg0, (char *)arg0 + 0x14);
    if (temp_r3 != 0) {
        fn_03485f68((void *) temp_r3);
    }
}
