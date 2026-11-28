typedef int s32;

extern "C" void fn_0387fbec(void*, void*);
extern "C" void fn_0387fc5c(void*, void*, void*);

extern "C" void fn_0387fcdc(void *object, void *context) {
    struct { s32 f8; } sp;

    fn_0387fbec(object, &sp.f8);
    fn_0387fc5c(object, context, &sp.f8);
}
