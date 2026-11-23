typedef int s32;

extern "C" int fn_034d23a8(void*);
extern "C" int fn_034d2450(void*);
extern "C" void fn_034d261c(void*);
extern "C" void fn_034d4290(void*, void*);
extern "C" char* data_1047c3d8;

extern "C" s32 fn_034d30e8(void *arg0) {
    if ((fn_034d23a8(arg0) != 0) || (fn_034d2450(arg0) != 0)) {
        fn_034d261c(arg0);
        return 0;
    }
    fn_034d4290((*(void **)((char *)(data_1047c3d8) + (0xF0))), arg0);
    (*(s32 *)((char *)(arg0) + (0x24))) = (s32) ((*(s32 *)((char *)(arg0) + (0x24))) & 0xFFFFFFFE);
    return 1;
}
