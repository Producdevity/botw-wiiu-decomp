extern "C" void fn_02585fc8(void** object);
extern "C" void fn_02585fd8(void** object);
extern "C" int fn_0339a0d0(void* owner);
extern "C" int fn_0339a0e0(void* owner);

extern "C" void fn_02585fe8(void** object) {
    void* owner = *object;
    if (fn_0339a0d0(owner) != 0 || fn_0339a0e0(owner) == 0) {
        fn_02585fc8(object);
        return;
    }
    fn_02585fd8(object);
}
