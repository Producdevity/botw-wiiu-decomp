typedef unsigned char u8;
typedef int s32;

extern "C" void fn_028d8bd8(void*);
extern "C" int fn_0378c7b0(void*);
extern "C" void fn_0378c840(void*);

extern "C" void fn_028d8dfc(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0x38))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x3C))) != 0)) {
        if (fn_0378c7b0((char *)arg0 + 0x38) != 0) {
            fn_0378c840((char *)arg0 + 0x38);
            goto block_4;
        }
    } else {
block_4:
        fn_028d8bd8(arg0);
    }
}
