extern "C" void fn_02408408(int);
extern "C" float data_100ab5f0;
extern "C" void fn_02405dc8(void** self)
{
    void** owner = self;
    void* object = *owner;
    char* vtable = *(char**)((char*)object + 0xE8);
    void* target = (*(void* (**)(void*))(vtable + 0x30C))(object);
    if (target != 0) {
        *(float*)((char*)target + 0x114) = data_100ab5f0;
    }
    fn_02408408((int)self);
}
