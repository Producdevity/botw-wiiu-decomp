typedef signed char s8;
typedef int s32;

extern "C" void fn_02512d14(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10104768;

extern "C" void fn_02669b4c(void *arg0) {
    fn_02512d14(arg0);
    (*(s8 *)((char *)(arg0) + (0x99))) = 0;
    (*(s8 *)((char *)(arg0) + (0x98))) = 0;
    fn_037b8284(arg0, &data_10104768, 0);
}
