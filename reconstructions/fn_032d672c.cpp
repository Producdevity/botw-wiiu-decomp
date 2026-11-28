extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void fn_033a7030(void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_102a9de4;

namespace {
struct Triple {
    int first;
    int second;
    int third;
};

struct Object {
    char padding_0[0xC];
    int *vtable;
    char padding_10[0x10];
    Triple list;
    char padding_2C[0x50];
    int flag;
};
}

extern "C" void* fn_032d672c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x80)) != 0) {
        fn_037b7cf0(self, source);
        Triple *list = &((Object *)self)->list;
        ((Object *)self)->vtable = &data_102a9de4;
        if (list != 0 || (list = (Triple *)fn_0308e578(sizeof(Triple))) != 0) {
            list->first = 0;
            list->second = 0;
            list->third = 0;
        }
        fn_033a7030((char *)self + 0x2C);
        ((Object *)self)->flag = 0;
    }
    return self;
}
