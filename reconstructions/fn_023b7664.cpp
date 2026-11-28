extern "C" void fn_023b720c(void *, float);
extern "C" void fn_023b7308(void *, float);
extern "C" void fn_0294f828(void *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x90];
    float value_94;
    float value_98;
};
}

extern "C" void fn_023b7664(void *object)
{
    Object *view = (Object *)object;
    fn_023b720c(object, view->value_94);
    fn_023b7308(object, view->value_98);
    fn_0294f828(view->owner, (char *)object + 0x58);
}
