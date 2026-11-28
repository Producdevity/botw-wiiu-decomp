extern "C" void* fn_0283417c(void* storage, const void* source);
extern "C" void fn_02b4d8c8(void*);
extern "C" void fn_02b4eb0c(void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10142134;

namespace {
struct Triple {
    int first;
    int second;
    int third;
};

struct Object {
    char padding_0[0xC];
    int *vtable;
    char padding_10[0x40];
    Triple list;
    char padding_5C[0x3FC];
    unsigned char flag;
};
}

extern "C" void* fn_0283810c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x45C)) != 0) {
        fn_0283417c(self, source);
        Triple *list = &((Object *)self)->list;
        ((Object *)self)->vtable = &data_10142134;
        if (list != 0 || (list = (Triple *)fn_0308e578(sizeof(Triple))) != 0) {
            list->first = 0;
            list->second = 0;
            list->third = 0;
        }
        fn_02b4eb0c((char *)self + 0x5C);
        fn_02b4d8c8((char *)self + 0x2F8);
        ((Object *)self)->flag = 0;
    }
    return self;
}
