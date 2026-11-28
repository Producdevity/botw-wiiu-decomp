extern "C" void fn_03a3f360(void*, void*);
extern "C" void fn_03c457e8(void*, unsigned char);
extern "C" float data_1035d3f8;

namespace {
struct Inner {
    char padding_0[0x4C];
    void *target;
};
struct Object {
    char padding_0[0x24];
    int active;
    char padding_28[4];
    float value;
    char padding_30[4];
    Inner *inner;
};
}

extern "C" void fn_03a3bdc8(void* self)
{
    fn_03c457e8(self, 0);
    ((Object *) self)->value = data_1035d3f8;
    if (((Object *) self)->active != 0) {
        void* target = ((Object *) self)->inner->target;
        fn_03a3f360(target, self);
    }
}
