extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a4d518(void*);
extern "C" void fn_03a4d9f4(void*);

extern "C" int data_1030acb4;

namespace {
struct Pair {
    int first;
    int second;
};
struct Sub {
    unsigned char padding_0[0x18];
    int* vtable;
};
struct Object {
    unsigned char flag;
    unsigned char padding_1[3];
    Pair pair;
    int count;
    Sub sub;
    unsigned char padding_2c[0x10];
};
}

extern "C" void *fn_0370b660(void *object)
{
    void* sub;
    Object* self;
    void* pair;
    self = (Object*) object;
    if (self != 0 || (self = (Object*) fn_0308e578(0x3C)) != 0) {
        pair = &self->pair;
        self->flag = 0;
        if (pair != 0 || (pair = fn_0308e578(sizeof(Pair))) != 0) {
            ((Pair*) pair)->first = 0;
            ((Pair*) pair)->second = 0;
        }
        sub = &self->sub;
        self->count = 0;
        if (sub != 0 || (sub = fn_0308e578(sizeof(Sub))) != 0) {
            fn_03a4d9f4(sub);
            ((Sub*) sub)->vtable = &data_1030acb4;
        }
        fn_03a4d518((char*) self + 0x2C);
    }
    return self;
}
