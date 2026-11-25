extern "C" void* fn_031968e4(void*);
extern "C" void* fn_031979fc(void*, void*, void*, void*, void*, void*);

extern "C" void fn_02555988(void** self, int enable)
{
    void* owner = *self;
    void* target = (*(void* (**)(void*))(*(char**)((char*)owner + 0xe8) + 0x30c))(owner);
    if (target != 0) {
        unsigned char state = *(unsigned char*)((char*)target + 0x88);
        if (enable != 0) {
            if (state != 2)
                fn_031979fc(target, 0, (void*)2, 0, (void*)1, 0);
        } else if (state == 2) {
            fn_031968e4(target);
        }
    }
}
