extern "C" void fn_02b30fbc(void*, void*);
extern "C" void fn_02b31208(void*);

namespace {
struct Object {
    char padding_0[0x50];
    unsigned char flag;
};
}

extern "C" void fn_02b31450(void* object, void* arg)
{
    int flag = ((Object *)object)->flag;
    if (flag == 0) {
        int value = 1;
        unsigned char* field = &((Object *)object)->flag;
        *field = value;
        fn_02b30fbc(object, arg);
        fn_02b31208(object);
    }
}
