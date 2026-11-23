typedef unsigned char u8;
typedef float f32;

extern "C" void fn_0348e490(void*, float);

extern "C" f32 data_1016bfb4;

extern "C" void fn_0293f9b8(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0xF4)));
    if (temp_r3 != 0) {
        fn_0348e490(temp_r3, data_1016bfb4);
    }
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}
