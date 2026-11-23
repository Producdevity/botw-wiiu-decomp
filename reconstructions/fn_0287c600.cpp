typedef float f32;

extern "C" void fn_0287c558(void*);
struct Binding;
struct Source;
extern "C" void fn_0398863c(Binding *, Source *, const unsigned int *);

extern "C" void fn_0287c600(void *arg0) {
    fn_0398863c((Binding *)((char *)arg0 + 0x58), (*(struct Source **)((char *)(arg0) + (0x50))), (const unsigned int *)((char *)arg0 + 0x30));
    (*(f32 *)((char *)(arg0) + (0x74))) = (f32) *(*(f32 **)((char *)(arg0) + (0x28)));
    fn_0287c558(arg0);
}
