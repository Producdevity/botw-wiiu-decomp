extern "C" int fn_037ac0c0(void*);
extern "C" void fn_038ca564(void*, void*);
extern "C" void fn_038ca88c(void*, void*, void*, void*);

extern "C" int fn_037ad584(void* self)
{
    char* object = (char*)self;
    if (*(unsigned char*)(object + 0x54) == 3 || fn_037ac0c0(object) == 0) {
        return 0;
    }
    int offset = 0x330;
    void* target = *(void**)(object + 0x52C);
    if (target != 0) {
        fn_038ca564(target, *(void**)(*(char**)(object + offset) + 0xA4));
        fn_038ca88c(*(void**)(object + 0x52C), *(void**)(*(char**)(object + offset) + 0xA4), *(void**)(object + 0x414), 0);
    }
    return 1;
}
