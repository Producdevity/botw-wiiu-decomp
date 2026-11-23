typedef int s32;

extern "C" int fn_03487148(int, void*);
extern "C" void fn_034877bc(void*, void*, void*);

extern "C" void fn_028284fc(void **arg0, void *arg1) {
    struct { s32 f8; s32 fC; } sp;
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = (*(s32 *)((char *)(*arg0) + (0xF4)));
    if (temp_r31 != 0) {
        temp_r3 = fn_03487148(temp_r31, arg1);
        sp.fC = temp_r3;
        sp.f8 = temp_r3;
        fn_034877bc((void *) temp_r31, &sp.f8, 0);
    }
}
