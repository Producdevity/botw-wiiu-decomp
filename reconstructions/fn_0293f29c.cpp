extern "C" void fn_02551418(void*);
extern "C" void fn_0339bd38(void*, void*);

extern "C" void fn_0293f29c(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_0339bd38(temp_r31, (char *)arg0 + 0x28);
    fn_0339bd38(temp_r31, (char *)arg0 + 0x88);
    fn_02551418(arg0);
}
