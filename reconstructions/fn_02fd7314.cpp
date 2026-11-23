typedef unsigned int u32;
typedef float f32;

extern "C" float fn_02e1d580(void*, void*);
extern "C" void fn_02fd6d4c(void*);
extern "C" void fn_030b0cb8(unsigned int *, const unsigned int *);

extern "C" void fn_02fd7314(void *arg0, u32 *arg1) {
    fn_030b0cb8((unsigned int *)((char *)arg0 + 0x1BC0), arg1);
    (*(f32 *)((char *)(arg0) + (0x1BBC))) = fn_02e1d580((char *)arg0 + 0x1BC0, 0);
    fn_02fd6d4c(arg0);
}
