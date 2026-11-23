typedef float f32;

extern "C" void fn_034acae0(void *arg0, void *arg1, void *arg2) {
    if (arg1 != 0) {
        (*(f32 *)((char *)(arg1) + (0))) = (f32) (*(f32 *)((char *)(arg0) + (4)));
        (*(f32 *)((char *)(arg1) + (4))) = (f32) (*(f32 *)((char *)(arg0) + (8)));
        (*(f32 *)((char *)(arg1) + (8))) = (f32) (*(f32 *)((char *)(arg0) + (0xC)));
    }
    if (arg2 != 0) {
        (*(f32 *)((char *)(arg2) + (0))) = (f32) (*(f32 *)((char *)(arg0) + (0x14)));
        (*(f32 *)((char *)(arg2) + (4))) = (f32) (*(f32 *)((char *)(arg0) + (0x18)));
        (*(f32 *)((char *)(arg2) + (8))) = (f32) (*(f32 *)((char *)(arg0) + (0x1C)));
    }
}
