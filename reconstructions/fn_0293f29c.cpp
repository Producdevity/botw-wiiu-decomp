extern "C" void fn_02551418(void*);
extern "C" void fn_0339bd38(void*, void*);

extern "C" void fn_0293f29c(void **object) {
    void *owner;

    owner = *object;
    fn_0339bd38(owner, (char *)object + 0x28);
    fn_0339bd38(owner, (char *)object + 0x88);
    fn_02551418(object);
}
