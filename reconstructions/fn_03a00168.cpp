extern "C" void fn_039854c4(void*);

extern "C" int fn_03a00168(void **slot) {
    void *object = *slot;

    if (object != 0) {
        fn_039854c4(object);
        *slot = 0;
    }
    return 1;
}
