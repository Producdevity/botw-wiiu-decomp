typedef int s32;

extern "C" void fn_0308ee24(void*);
extern "C" void fn_0309f83c(void*, void*);
extern "C" void fn_0309f8ac(void*);
extern "C" void fn_0309f8bc(void*);

extern "C" void fn_0309f8cc(void *arg0) {
    s32 temp_r31;

    temp_r31 = (*(s32 *)((char *)(arg0) + (0x3C)));
    fn_0309f83c(arg0, 0);
    (*(s32 *)((char *)(arg0) + (0x3C))) = temp_r31;
    fn_0309f8ac(arg0);
    fn_0308ee24(arg0);
    fn_0309f8bc(arg0);
    (*(s32 *)((char *)(arg0) + (0x3C))) = 0;
}
