extern "C" void fn_0230274c(void *);
extern "C" void fn_02b7f998(float *, void *);
extern "C" float fn_03c6fcf0(const float *);

namespace {
struct Owner {
    char padding_0[0x268];
    float value_268[1];
};

struct Object {
    Owner *owner;
    char padding_4[0x124];
    float value_128[9];
    float value_14c;
};
}

extern "C" void fn_02303d58(void *object)
{
    Object *view = (Object *)object;
    fn_0230274c(object);
    fn_02b7f998(view->value_128, view->owner);
    view->value_14c = fn_03c6fcf0(view->owner->value_268);
}
