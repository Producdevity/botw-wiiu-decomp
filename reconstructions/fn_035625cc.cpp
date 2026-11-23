typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_035625a4(void*);

extern "C" s32 fn_035625cc(void *arg0, f32 farg0) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0x24))) != 0) && !(farg0 < (*(f32 *)((char *)(arg0) + (0x20))))) {
        return 0;
    }
    fn_035625a4(arg0);
    return 1;
}
