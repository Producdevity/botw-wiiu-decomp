typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025e83d8(void *);
extern "C" void fn_027ffe14(void*, void*);
extern "C" void fn_02b51bb8(void*, int);

extern "C" void fn_02800648(void *arg0) {
    fn_025e83d8(arg0);
    fn_027ffe14(arg0, 0);
    fn_02b51bb8((*(void **)((char *)(arg0) + (0))), (s32) (*(u8 *)((char *)(arg0) + (0x168))));
}
