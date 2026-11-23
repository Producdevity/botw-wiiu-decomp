typedef unsigned char u8;
typedef int s32;

struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);
extern "C" int fn_0378c7b0(void *);
extern "C" void* fn_037b5e8c(void *, const void *, void *, void *, int, int, int);
extern "C" char* data_1047c2b8;

extern "C" void *data_10463788;
extern "C" void *data_10463f6c;

extern "C" void fn_02a22e2c(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0xE4))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0xE8))) != 0)) {
        if (fn_0378c7b0((char *)arg0 + 0xE4) != 0) {
            fn_0378c734((ProcLink *)((char *)arg0 + 0xE4));
            goto block_4;
        }
    } else {
block_4:
        fn_037b5e8c(data_1047c2b8, data_10463788, (*(void **)((char *)(data_10463f6c) + (0x10))), (char *)arg0 + 0xE4, 0, 0, 2);
    }
}
