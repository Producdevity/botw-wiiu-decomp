extern "C" void* fn_024c6198(void* object);
extern "C" void fn_024c46a0(void* entry, void* owner);
extern "C" void fn_0315a3b0(void* object, void* other);

extern "C" void fn_024c621c(void** object, void* other) {
    void* entry = fn_024c6198(object);
    if (entry != 0) {
        fn_024c46a0(entry, *object);
    }
    fn_0315a3b0(object, other);
}
