extern "C" void fn_02b3df00(void*);
extern "C" void fn_03467dbc(unsigned char*);
extern "C" void fn_02d097b8(void* self)
{
    void* owner = *(void**)((char*)self + 0);
    unsigned char* (**slot)(void*) = (unsigned char* (**)(void*))((char*)*(void**)((char*)owner + 0xE8) + 0x16C);
    unsigned char* target = (*slot)(owner);
    if (target != 0) {
        char* object = (char*)self;
        fn_03467dbc(target);
        fn_02b3df00(object + 0x30);
        *(int*)(object + 0x30) = 0;
    }
}
