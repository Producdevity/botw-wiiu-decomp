typedef signed char s8;
typedef int s32;

extern "C" int fn_02e89a1c(void*);
extern "C" int fn_02e89ab4(void*);
extern "C" int fn_02e89b4c(void*);

extern "C" void fn_02e8b630(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x18))) = fn_02e89a1c(arg0);
    (*(s32 *)((char *)(arg0) + (0x1C))) = fn_02e89ab4(arg0);
    (*(s32 *)((char *)(arg0) + (0x20))) = fn_02e89b4c(arg0);
    (*(s8 *)((char *)(arg0) + (0x4D))) = 0;
}
