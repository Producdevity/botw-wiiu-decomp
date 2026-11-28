extern "C" int fn_02e1dc40(void*, void*);
extern "C" int fn_02fd65dc(void*, int);
extern "C" void fn_02fd6d4c(void*);

namespace {
struct Object {
    char padding_0[0x1BBC];
    char field_1bbc[4];
    char field_1bc0;
};
}

extern "C" void fn_02fd6e28(void* object)
{
    Object* self = (Object*)object;
    if (fn_02fd65dc(object, 3) != 0 && fn_02e1dc40(self->field_1bbc, &self->field_1bc0) != 0) {
        fn_02fd6d4c(object);
    }
}
