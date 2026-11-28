extern "C" void fn_02898520(void* object);
extern "C" int fn_02c19940(void* owner);

namespace {
struct Object {
    void* owner;
    char padding_4[0x28];
    signed char flag;
};
}

extern "C" void fn_0288ecec(void* object) {
    Object* view = static_cast<Object*>(object);
    if (fn_02c19940(view->owner) != 0) {
        view->flag = 1;
    }
    fn_02898520(object);
}
