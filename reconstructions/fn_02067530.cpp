typedef unsigned char u8;
typedef float f32;

extern "C" void fn_037924b4(void*, float);
extern "C" int fn_0379253c(void*, float);

extern "C" f32 data_1000a720;

extern "C" void fn_02067530(void *arg0, f32 farg0) {
    fn_037924b4((char *)arg0 + 0x3C, farg0);
    if (fn_0379253c((char *)arg0 + 0x3C, data_1000a720) != 0) {
        (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
    }
}
