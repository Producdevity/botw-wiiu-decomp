typedef int s32;
typedef unsigned int u32;

struct Block;
extern "C" unsigned char* fn_02e73e54(void*);
extern "C" void fn_02f3e9b4(void*);
extern "C" void fn_02f3ea24(void*, int);

extern "C" s32 data_10469d50;

extern "C" void fn_02f3eb24(struct Block *arg0) {
    u32 temp_r4;

    fn_02f3e9b4(arg0);
    temp_r4 = (u32)(fn_02e73e54(arg0) - data_10469d50);
    if (temp_r4 < 0x30U) {
        fn_02f3ea24(arg0, (s32) temp_r4);
    }
}
