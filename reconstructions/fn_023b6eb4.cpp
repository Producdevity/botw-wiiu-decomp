typedef float f32;

extern "C" void fn_023b6db4(void*);
extern "C" float fn_023b6e04(void*);
extern "C" float fn_023b6e6c(void*);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_023b6eb4(void *arg0) {
    fn_023b6db4(arg0);
    (*(f32 *)((char *)(arg0) + (0x94))) = fn_023b6e04(arg0);
    (*(f32 *)((char *)(arg0) + (0x98))) = fn_023b6e6c(arg0);
    fn_0294f720((*(void **)((char *)(arg0) + (0))), 4, (char *)arg0 + 0x58);
}
