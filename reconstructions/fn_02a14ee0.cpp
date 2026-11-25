extern "C" int fn_0310d944(void*, void*);
extern "C" void* data_1046ca84;

extern "C" int fn_02a14ee0(void* self)
{
    void* owner = data_1046ca84;
    if (owner == 0) {
        return 0;
    }
    int offset = 0x1C;
    char* vtable = *(char**)((char*)self + 4);
    (*(void (**)(void*))(vtable + offset))(self);
    void** field = (void**)self;
    return fn_0310d944(owner, *field) != 0;
}
