typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_03060d8c(void*);
extern "C" int fn_0379253c(void *, float);

extern "C" f32 data_1025b218;

extern "C" s32 fn_03060e78(void *arg0, void *arg1) {
    if ((*(f32 *)((char *)(arg0) + (0xC))) == data_1025b218) {
        if ((s32) (*(u8 *)((char *)(arg0) + (0x14))) != 0) {
            (*(u8 *)((char *)(arg0) + (0x14))) = 0U;
            return 1;
        }
        
        return 0;
    }
    fn_03060d8c(arg0);
    if (fn_0379253c(arg0, (*(f32 *)((char *)(arg0) + (0xC)))) != 0) {
        return 1;
    }
    return 0;
}
