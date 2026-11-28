typedef int s32;

extern "C" void fn_03576890(void*, void*, void*);
extern "C" void fn_03576900(void*, void*, void*);

extern "C" void fn_03576980(void *object, void *first, void *second) {
    struct { s32 f8; } sp;

    fn_03576890(object, &sp.f8, second);
    fn_03576900(object, first, &sp.f8);
}
