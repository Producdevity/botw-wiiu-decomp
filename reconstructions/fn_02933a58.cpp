extern "C" void fn_02933988(void** object);
extern "C" void fn_029339f0(void** object);
extern "C" int fn_0339a0d0(void* owner);
extern "C" void fn_0339bd58(void* owner);

extern "C" void fn_02933a58(void** object) {
    fn_0339bd58(*object);
    if (fn_0339a0d0(*object) != 0) {
        fn_02933988(object);
        return;
    }
    fn_029339f0(object);
}
