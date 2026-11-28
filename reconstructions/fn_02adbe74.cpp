extern "C" void *fn_0308e578(unsigned size);
extern "C" int data_101a7e34;
extern "C" int data_101a7e44;

namespace {
struct Object {
    char padding_0[0x10];
    int *table_10;
    int *table_14;
};
}

extern "C" void fn_02adbe74(void *self)
{
    if (self != 0 || (self = fn_0308e578(24)) != 0) {
        ((Object *)self)->table_14 = &data_101a7e34;
        ((Object *)self)->table_10 = &data_101a7e44;
    }
}
