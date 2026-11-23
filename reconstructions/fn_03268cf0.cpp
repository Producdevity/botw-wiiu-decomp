typedef float f32;

extern "C" void fn_0326182c(void*);

extern "C" void fn_03268cf0(void *arg0) {
    void *temp_r12;

    fn_0326182c(arg0);
    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    (*(f32 *)((char *)(temp_r12) + (0x274))) = (f32) (*(f32 *)((char *)(arg0) + (0x90)));
    (*(f32 *)((char *)(temp_r12) + (0x278))) = (f32) (*(f32 *)((char *)(arg0) + (0x94)));
    (*(f32 *)((char *)(temp_r12) + (0x27C))) = (f32) (*(f32 *)((char *)(arg0) + (0x98)));
}
