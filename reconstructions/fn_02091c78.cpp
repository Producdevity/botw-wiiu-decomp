extern "C" void fn_0383eb84(void*, int, void*);
extern "C" void fn_0383ec68(void*, int, int, void*);
extern "C" void fn_02091c78(void** self, int value)
{
    void** owner = self;
    fn_0383eb84(*owner, 0x1B, 0);
    if (owner != 0) {
        fn_0383ec68(*owner, 0x1C, value, 0);
    }
}
