typedef unsigned int u32;

extern "C" void fn_02eaa1a8(void *, unsigned);
extern "C" void fn_02f63400(void *, void *);
extern "C" void fn_02f639fc(void *, void *);
extern "C" void fn_02f66704(void*, void*);
extern "C" void fn_02f66a78(void*, void*);
extern "C" void * data_104698f8;

extern "C" void fn_02f66c18(void *arg0, void *arg1) {
    void* const* vt1;
    u32 temp_r3;

    temp_r3 = ((u32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (0x3C)))[21])(arg1);
    fn_02eaa1a8(data_104698f8, temp_r3);
    fn_02f66704(arg0, arg1);
    fn_02f63400(arg0, arg1);
    fn_02f639fc(arg0, (void *) temp_r3);
    fn_02f66a78(arg0, arg1);
}
