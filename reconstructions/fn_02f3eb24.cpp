typedef int s32;
typedef unsigned int u32;

struct Block;
extern "C" unsigned char* fn_02e73e54(void*);
extern "C" void fn_02f3e9b4(void*);
extern "C" void fn_02f3ea24(void*, int);

extern "C" s32 data_10469d50;

extern "C" void fn_02f3eb24(struct Block *block) {
    fn_02f3e9b4(block);
    u32 index = (u32)(fn_02e73e54(block) - data_10469d50);
    if (index < 0x30U) {
        fn_02f3ea24(block, (s32)index);
    }
}
