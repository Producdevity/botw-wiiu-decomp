typedef float f32;

extern "C" void fn_04318a3c(void *arg0, void *arg1, void *arg2, void *arg3) {
    (*(f32 *)((char *)(arg3) + (0))) = (f32) ((*(f32 *)((char *)(arg0) + (8))) * (*(f32 *)((char *)(arg1) + (4))));
    (*(f32 *)((char *)(arg3) + (4))) = (f32) ((*(f32 *)((char *)(arg0) + (0xC))) * (*(f32 *)((char *)(arg1) + (4))));
    (*(f32 *)((char *)(arg3) + (8))) = (f32) (*(f32 *)((char *)(arg0) + (4)));
    (*(f32 *)((char *)(arg3) + (0xC))) = (f32) (*(f32 *)((char *)(arg0) + (0x10)));
    (*(f32 *)((char *)(arg3) + (0x10))) = (f32) (*(f32 *)((char *)(arg0) + (0x14)));
    (*(f32 *)((char *)(arg2) + (0x1C))) = (f32) ((*(f32 *)((char *)(arg0) + (0))) * (*(f32 *)((char *)(arg1) + (8))));
}
