typedef unsigned char u8;

extern "C" void* fn_0308e578(unsigned);
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];

namespace {
struct Object {
    u8 *table;
    u8 *data;
};
}

extern "C" void fn_02dafa70(void *arg0) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->data = (u8 *)&data_10263910;
        object->table = (u8 *)data_10263a00;
    }
}
