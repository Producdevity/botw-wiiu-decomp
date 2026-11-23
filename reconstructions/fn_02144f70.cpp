typedef signed char s8;

extern "C" void fn_02144ea4(void*, int);
extern "C" void fn_022502b0(void*);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_02144f70(void *arg0) {
    fn_022502b0(arg0);
    (*(s8 *)((char *)(arg0) + (0xE4))) = 0;
    fn_0294f720((*(void **)((char *)(arg0) + (0))), 4, (char *)arg0 + 0xCC);
    fn_02144ea4(arg0, 1);
}
