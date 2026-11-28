typedef int s32;

extern "C" void fn_035487d8(void*, void*);

extern "C" void fn_0351abe4(void **object, void *value) {
    if (object != 0) {
        fn_035487d8((char *) object + 4, value);
        ((s32 (*)(void **, s32)) ((void *const *) *object)[3])(object, 3);
    }
}
