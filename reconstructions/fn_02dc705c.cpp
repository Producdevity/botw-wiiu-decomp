extern "C" void fn_02dc6f98(void*);
extern "C" void fn_0307104c(void);
extern "C" void fn_032bd308(void*);

namespace {
struct Object {
    char padding_0[0x18];
    unsigned char flag_18;
    unsigned char flag_19;
    char padding_1a[0x5A];
    char member[1];
};
}

extern "C" void fn_02dc705c(void* object)
{
    Object *view = (Object *) object;
    view->flag_18 = 0;
    view->flag_19 = 0;
    fn_032bd308(view->member);
    fn_02dc6f98(object);
    fn_0307104c();
}
