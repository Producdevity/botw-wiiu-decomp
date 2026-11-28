extern "C" void fn_0434c018(void*);

extern "C" void fn_03c24338(unsigned char *object) {
    if (*object != 0) {
        fn_0434c018(object + 8);
        *object = 0;
    }
}
