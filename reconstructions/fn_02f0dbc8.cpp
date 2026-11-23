typedef unsigned int u32;

extern "C" void fn_02f0dbac(void*, void*, void*);
extern "C" unsigned* fn_03a38bf4(unsigned *);

extern "C" void fn_02f0dbc8(void *arg0, void *arg1) {
    struct { u32 f8; } sp;

    fn_02f0dbac(arg0, arg1, fn_03a38bf4(&sp.f8));
}
