extern "C" void* fn_02c6430c(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_101cd8c0;

namespace {
struct Triple {
    int first;
    int second;
    int third;
};

struct Object {
    char padding_0[0xC];
    int *vtable;
    char padding_10[0x4];
    Triple list;
    int flag;
};
}

extern "C" void* fn_02c85cb4(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x24)) != 0) {
        fn_02c6430c(self, source);
        Triple *list = &((Object *)self)->list;
        ((Object *)self)->vtable = &data_101cd8c0;
        if (list != 0 || (list = (Triple *)fn_0308e578(sizeof(Triple))) != 0) {
            list->first = 0;
            list->second = 0;
            list->third = 0;
        }
        ((Object *)self)->flag = 0;
    }
    return self;
}
