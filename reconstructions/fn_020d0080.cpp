namespace {
struct Source {
    char padding_0[0x26C];
    float value_26c;
};

struct Object {
    Source *source;
    char padding_4[0x3C];
    char member_40[0x24];
    float value_64;
};
}

extern "C" void fn_020cf5f4(void*);
extern "C" void fn_02b7f998(float *, void *);

extern "C" void fn_020d0080(void *object) {
    Object *view = (Object *)object;
    fn_020cf5f4(object);
    fn_02b7f998((float *)view->member_40, view->source);
    view->value_64 = view->source->value_26c;
}
