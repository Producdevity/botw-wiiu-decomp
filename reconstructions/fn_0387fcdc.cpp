typedef int s32;

extern "C" void fn_0387fbec(void*, void*);
extern "C" void fn_0387fc5c(void*, void*, void*);

extern "C" void fn_0387fcdc(void *arg0, void *arg1) {
    struct { s32 f8; } sp;

    fn_0387fbec(arg0, &sp.f8);
    fn_0387fc5c(arg0, arg1, &sp.f8);
}
