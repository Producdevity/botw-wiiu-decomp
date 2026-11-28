extern "C" void fn_030ea2cc(void *);
extern "C" int fn_0344a570(void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_032c8204(void **slot) {
    void* actor = fn_037966a8(*slot);
    if ((actor != 0) && (fn_0344a570(actor) != 0)) {
        fn_030ea2cc(slot);
    }
}
