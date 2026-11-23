extern "C" int fn_02ea7a9c(void*);
extern "C" void fn_02ea952c(void*);
extern "C" void fn_02f687e4(void*, void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f68bf8(void *arg0) {
    fn_02ea952c(data_104698f8);
    fn_02f687e4(arg0, (void *)(fn_02ea7a9c(data_104698f8)));
}
