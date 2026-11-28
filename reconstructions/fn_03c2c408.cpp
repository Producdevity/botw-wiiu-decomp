extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c24828(void*);
extern "C" void fn_03c2c3f4(void* object, unsigned flags);
extern "C" void fn_042181f4(void* object, unsigned flags);

extern "C" void fn_03c2c408(void* object, int flags) {
    if (object != 0) {
        fn_03c24828(object);
        fn_03c2c3f4(static_cast<char *>(object) + 1192, 2U);
        fn_042181f4(static_cast<char *>(object) + 584, 2U);
        fn_042181f4(static_cast<char *>(object) + 12, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
