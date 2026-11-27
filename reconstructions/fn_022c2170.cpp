extern "C" int fn_022c0a18(void*);
extern "C" void* fn_02b16ef0(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_022c2170(void **holder) {
    if (fn_022c0a18(holder) != 0) {
        void *target = fn_037966a8(*holder);
        if (target != 0) {
            fn_02b16ef0(target);
        }
    }
}
