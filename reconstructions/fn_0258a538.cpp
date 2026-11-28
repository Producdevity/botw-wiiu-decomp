extern "C" void fn_0258a518(void*);
extern "C" void fn_0258a528(void);
extern "C" int fn_0339a0d0(void*);

namespace {
struct Object {
    void* owner;
    unsigned char padding_4[0x1C];
    char value_20;
};
}

extern "C" void fn_0258a538(void* self)
{
    void* owner = ((Object*)self)->owner;
    ((Object*)self)->value_20 = 0;
    int active = fn_0339a0d0(owner);
    void* target = self;
    if (active != 0) {
        fn_0258a518(target);
        return;
    }
    fn_0258a528();
}
