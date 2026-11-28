extern "C" void fn_02eaa638(void *, unsigned char);
extern "C" void fn_02efaf14(void *);
extern "C" void fn_02f03938(void *);
extern "C" void *data_104698f8;

extern "C" void fn_02f039d0(void *object)
{
    fn_02f03938(object);
    fn_02eaa638(data_104698f8, 0U);
    fn_02efaf14((char *)object + 0x484);
}
