typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_03b68268(void*, int, int, int);
extern "C" void fn_03b68320(void*, float, float);

extern "C" void fn_03b68354(void *arg0, void *arg1) {
    fn_03b68268(arg0, (s32) (*(u8 *)((char *)(arg1) + (0xA))), (s32) (*(u8 *)((char *)(arg1) + (8))), (s32) (*(u8 *)((char *)(arg1) + (9))));
    fn_03b68320(arg0, (*(f32 *)((char *)(arg1) + (0xC))), (*(f32 *)((char *)(arg1) + (0x10))));
}
