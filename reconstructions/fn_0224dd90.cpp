extern "C" void* fn_0308e5a0(unsigned int, void*, int);

namespace {
struct ListHead {
    int first;
    int last;
};

struct Object {
    char padding_0[0x48];
    ListHead* list;
};
}

extern "C" int fn_0224dd90(void* object, void* heap)
{
    ListHead* list = (ListHead*)fn_0308e5a0(8, heap, 4);
    if (list != 0) {
        list->first = 0;
        list->last = 0;
    }
    ((Object*)object)->list = list;
    return 1;
}
