typedef float f32;

extern "C" void* fn_02880238(void*, void*);

extern "C" f32 data_1014cd48;

extern "C" void fn_0288141c(void *arg0) {
    void *temp_r3;

    if (!((*(f32 *)((char *)(arg0) + (0x3C))) > data_1014cd48)) {
        temp_r3 = fn_02880238(arg0, 0);
        (*(f32 *)((char *)(temp_r3) + (0x4C))) = (f32) -(*(f32 *)((char *)(temp_r3) + (0x4C)));
    }
}
