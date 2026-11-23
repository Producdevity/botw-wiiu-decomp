extern "C" void fn_02eaa638(void *, unsigned char);
extern "C" void fn_02efaf08(void *);
extern "C" void fn_02f03938(void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f0398c(void *arg0) {
    fn_02f03938(arg0);
    fn_02eaa638(data_104698f8, 0U);
    fn_02efaf08((char *)arg0 + 0x484);
}
