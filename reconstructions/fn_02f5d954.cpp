typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02f5d864(void*);

extern "C" s32 fn_02f5d954(void *arg0) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0x1FD5))) != 0) && (fn_02f5d864(arg0) == 0)) {
        return 1;
    }
    return 0;
}
