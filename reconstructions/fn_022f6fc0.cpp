extern "C" void fn_02231d20(void*);
extern "C" int fn_022f6ef4(void*);
extern "C" void fn_022f6f90(void*);

extern "C" void fn_022f6fc0(void *object) {
    fn_02231d20(object);
    if (fn_022f6ef4(object) != 0) {
        fn_022f6f90(object);
    }
}
