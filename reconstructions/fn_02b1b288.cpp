typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" f32 data_101abb58;
extern "C" f32 data_101abb5c;

extern "C" void fn_02b1b288(void *arg0) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0x48))) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (4))) > 3)) {
        (*(f32 *)((char *)(arg0) + (0x30))) = (f32) ((*(f32 *)((char *)(arg0) + (0x34))) * data_101abb58);
        return;
    }
    (*(f32 *)((char *)(arg0) + (0x30))) = (f32) ((*(f32 *)((char *)(arg0) + (0x34))) * data_101abb5c);
}
