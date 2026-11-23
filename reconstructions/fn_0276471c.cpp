extern "C" void fn_0254d1fc(void*);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_029530a0(void*);

extern "C" void fn_0276471c(void **arg0) {
    fn_029530a0(*arg0);
    fn_0294f828(*arg0, (char *)arg0 + 0x144);
    fn_0254d1fc(arg0);
}
