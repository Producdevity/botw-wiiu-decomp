extern "C" void fn_0357f524(void*);
extern "C" void fn_03ba0058(void*);

extern "C" void fn_0357f588(void **slot) {
    void *owned;

    fn_0357f524(slot);
    owned = *slot;
    if (owned != 0) {
        fn_03ba0058(owned);
        *slot = 0;
    }
}
