struct LinkedHolder;
extern "C" void* fn_037e61a8(LinkedHolder *);

namespace {
struct Object {
    char padding_0[4];
    void* fallback;
    char padding_8[4];
    char holder;
};
}

extern "C" void* fn_034ef6d0(void* object)
{
    Object* self = (Object*)object;
    if (fn_037e61a8((LinkedHolder*)&self->holder) != 0) {
        return fn_037e61a8((LinkedHolder*)&self->holder);
    }
    return self->fallback;
}
