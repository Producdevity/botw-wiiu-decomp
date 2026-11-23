typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02ef869c(void*, int, void*, void*);
extern "C" void fn_02ef87e8(void*);

extern "C" void fn_02ef8858(void *arg0, void *arg1) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x70))) != 0) {
        fn_02ef869c(arg0, (s32) (*(u8 *)((char *)(arg1) + (0))), (*(void **)((char *)(arg1) + (4))), (*(void **)((char *)(arg1) + (8))));
        fn_02ef87e8(arg0);
    }
}
