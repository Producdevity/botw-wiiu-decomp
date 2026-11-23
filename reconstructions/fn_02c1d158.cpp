typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" s32 data_10510a28;

extern "C" void fn_02c1d158(void *arg0) {
    (*(f32 *)((char *)(arg0) + (0))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0x98)));
    (*(f32 *)((char *)(arg0) + (4))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0x9C)));
    (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0xA0)));
    if ((s32) (*(u8 *)((char *)(&data_10510a28) + (0xA4))) != 0) {
        (*(f32 *)((char *)(arg0) + (0))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0xA8)));
        (*(f32 *)((char *)(arg0) + (4))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0xAC)));
        (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(&data_10510a28) + (0xB0)));
    }
}
