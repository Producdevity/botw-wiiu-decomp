extern "C" int fn_029c01e4(void*);
extern "C" void fn_0383ec68(void*, int, int, void*);

extern "C" void fn_029c0270(void **object) {
    if (fn_029c01e4(object) != 0) {
        fn_0383ec68(*object, 0x19, 1, 0);
    }
}
