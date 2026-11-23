extern "C" void fn_02145408(void*);
extern "C" void fn_02250e7c(void*);
extern "C" void fn_0294f828(void*, void*);

extern "C" void fn_02145480(void **arg0) {
    fn_0294f828(*arg0, (char *)arg0 + 0xCC);
    fn_02145408(arg0);
    fn_02250e7c(arg0);
}
