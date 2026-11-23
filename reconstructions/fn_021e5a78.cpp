typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" float fn_03c6fcf0(const float *);

extern "C" void fn_021e5a78(void *arg0) {
    f32 temp_f1;

    temp_f1 = fn_03c6fcf0((const float *)((*(s32 *)((char *)(arg0) + (0))) + 0x268));
    (*(f32 *)((char *)(arg0) + (0x1C))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x20))) = temp_f1;
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}
