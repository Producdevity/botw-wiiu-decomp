extern "C" void fn_0258a518(void*);
extern "C" void fn_0258a528(void);
extern "C" int fn_0339a0d0(void*);
extern "C" void fn_0258a538(void* self)
{
    void* owner = *(void**)((char*)self + 0);
    *((char*)self + 0x20) = 0;
    int active = fn_0339a0d0(owner);
    void* target = self;
    if (active != 0) {
        fn_0258a518(target);
        return;
    }
    fn_0258a528();
}
