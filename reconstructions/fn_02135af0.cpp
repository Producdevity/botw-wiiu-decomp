extern "C" void* fn_0370ee34(void*, void*, void*, void*);
extern "C" int fn_02135af0(void* self)
{
    char* object = (char*)self;
    if (**(unsigned char**)(object + 0x10) == 0) {
        fn_0370ee34(*(void**)(*(char**)object + 0x394), (void*)0x37, object + 0x14, 0);
    }
    char* args = object + 0x14;
    fn_0370ee34(*(void**)(*(char**)object + 0x394), (void*)0x38, args, 0);
    return 1;
}
