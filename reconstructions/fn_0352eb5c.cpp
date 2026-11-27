extern "C" unsigned char data_102d8dbc[];
extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Object {
    signed char flag;
    char padding_1[3];
    const void *table;
    int first;
    char padding_c[8];
    int second;
};
}

extern "C" void fn_0352eb5c(void* storage, int first, int second) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(0x18U), object != 0)) {
        object->first = first;
        object->second = second;
        object->table = data_102d8dbc;
        object->flag = 0;
    }
}
