extern "C" bool fn_02d4dfb0(void* owner);
extern "C" void fn_02d6b514(void* owner);

extern "C" void fn_02cdcb38(void** object) {
    void* owner = *object;
    if (*((unsigned char*)owner + 0x900) != 0) {
        fn_02d4dfb0(owner);
    }
    fn_02d6b514(*object);
}
