extern "C" void fn_021f5de0(void*, const void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_1005ba50;

namespace {
struct Triple {
    int first;
    int second;
    int third;
};

struct Object {
    char padding_0[0xC];
    int *vtable;
    char padding_10[0x18];
    Triple list;
    unsigned char flag;
};
}

extern "C" void* fn_02228904(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x38)) != 0) {
        fn_021f5de0(self, source);
        Triple *list = &((Object *)self)->list;
        ((Object *)self)->vtable = &data_1005ba50;
        if (list != 0 || (list = (Triple *)fn_0308e578(sizeof(Triple))) != 0) {
            list->first = 0;
            list->second = 0;
            list->third = 0;
        }
        ((Object *)self)->flag = 0;
    }
    return self;
}
