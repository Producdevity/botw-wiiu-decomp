extern "C" int fn_0339aaa8(void* owner);
extern "C" void fn_02628d70(void** object);
extern "C" void fn_02628d80(void** object);

extern "C" void fn_02628d90(void** object) {
    if (fn_0339aaa8(*object) != 0) {
        fn_02628d70(object);
        return;
    }
    fn_02628d80(object);
}
