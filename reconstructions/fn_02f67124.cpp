extern "C" void fn_02eaa1a8(void *, unsigned);
extern "C" void fn_02eaa1f8(void*);
extern "C" void fn_02eaa5b8(void *, unsigned);
extern "C" void fn_02f5f42c(void *);

extern "C" void *data_104698f8;

extern "C" void fn_02f67124(void *object) {
    fn_02eaa1a8(data_104698f8, 3U);
    fn_02f5f42c(object);
    fn_02eaa1f8(data_104698f8);
    fn_02eaa5b8(data_104698f8, 2U);
}
