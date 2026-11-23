typedef signed char s8;
typedef int s32;

extern "C" void fn_026a801c(void*, void*);
extern "C" int fn_0307cf5c(void*, void*);

extern "C" void fn_029ac258(void *arg0, void *arg1) {
    (*(s8 *)((char *)(arg0) + (0x64))) = fn_0307cf5c(arg0, arg1);
    (*(s32 *)((char *)(arg0) + (0x68))) = 0x1E;
    fn_026a801c(arg0, arg1);
}
