typedef signed char s8;
typedef int s32;

extern "C" void fn_027b8bcc(void*);
extern "C" void fn_02b565d0(void*, void*, int);
extern "C" void fn_037b8798(void*, void*, int, int, void*);

extern "C" s32 data_10132884;

extern "C" void fn_027cbc60(void *arg0) {
    fn_027b8bcc(arg0);
    fn_02b565d0((char *)arg0 + 0x1A0, (*(void **)((char *)(arg0) + (0))), 1);
    (*(s8 *)((char *)(arg0) + (0x24C))) = 0;
    fn_037b8798(arg0, &data_10132884, 1, 3, 0);
}
