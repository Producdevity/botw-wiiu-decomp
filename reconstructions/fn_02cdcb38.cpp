extern "C" void fn_02d4dfb0();
extern "C" void fn_02d6b514(void* owner);

extern "C" void fn_02cdcb38(void** object) {
    if (*((unsigned char*)*object + 0x900) != 0) {
        fn_02d4dfb0();
    }
    fn_02d6b514(*object);
}
