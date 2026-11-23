typedef int s32;

extern "C" void fn_03576890(void*, void*);
extern "C" void fn_03576900(void*, void*, void*);

extern "C" void fn_03576980(void *arg0, void *arg1) {
    struct { s32 f8; } sp;

    fn_03576890(arg0, &sp.f8);
    fn_03576900(arg0, arg1, &sp.f8);
}
