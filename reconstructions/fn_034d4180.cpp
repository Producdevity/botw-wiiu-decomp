typedef int s32;

extern "C" int fn_037fffe0(void*, void*, void*);
extern "C" char* data_1047c3d8;

extern "C" s32 fn_034d4180(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x14C))) == 0) {
        (*(s32 *)((char *)(arg0) + (0x14C))) = fn_037fffe0(data_1047c3d8, 0, 0);
    }
    return 1;
}
