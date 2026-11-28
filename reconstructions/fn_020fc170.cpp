extern "C" void fn_020fbbfc(void *, float);
extern "C" void fn_020fbcf8(void *, float);
extern "C" void fn_0294f828(void *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x74];
    float value_78;
    float value_7c;
};
}

extern "C" void fn_020fc170(void *object)
{
    Object *view = (Object *)object;
    fn_020fbbfc(object, view->value_78);
    fn_020fbcf8(object, view->value_7c);
    fn_0294f828(view->owner, (char *)object + 0x54);
}
