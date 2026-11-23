typedef signed char s8;
typedef int s32;

extern "C" int fn_0211bba0(void*);
extern "C" void fn_0236b44c(void*);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_0211bd20(void *arg0) {
    fn_0236b44c(arg0);
    (*(s8 *)((char *)(arg0) + (0xD0))) = 1;
    (*(s32 *)((char *)(arg0) + (0xCC))) = fn_0211bba0(arg0);
    fn_0294f720((*(void **)((char *)(arg0) + (0))), 0, (char *)arg0 + 0xB8);
}
