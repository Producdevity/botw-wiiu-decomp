extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_1008d6b8;

namespace {
struct Triple {
    int first;
    int second;
    int third;
};

struct Object {
    char padding_0[0xC];
    int *vtable;
    Triple list;
    unsigned char flag;
};
}

extern "C" void* fn_023563dc(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x20)) != 0) {
        fn_0379468c(self, source);
        Triple *list = &((Object *)self)->list;
        ((Object *)self)->vtable = &data_1008d6b8;
        if (list != 0 || (list = (Triple *)fn_0308e578(sizeof(Triple))) != 0) {
            list->first = 0;
            list->second = 0;
            list->third = 0;
        }
        ((Object *)self)->flag = 0;
    }
    return self;
}
