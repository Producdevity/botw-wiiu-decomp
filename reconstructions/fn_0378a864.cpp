extern "C" void *fn_037903a8(void *, void *);
extern "C" void *fn_0379024c(void *, void *);
extern "C" void *data_1047c244;

extern "C" void fn_0378a864(void *object, int mode) {
    if (mode == 1) {
        void **holder = &data_1047c244;
        fn_037903a8(*holder, object);
        fn_0379024c(*holder, object);
        if (object != 0) {
            (*(void (**)(void *, int))((char *)*(void **)((char *)object + 0xE8) + 0x1C))(object, 3);
        }
    }
}
