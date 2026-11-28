extern "C" void fn_02b616bc(void *, void *);
extern "C" int fn_02b61950(void *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x18];
    unsigned char *flag_1c;
    char padding_20[0x28];
    char member_48[1];
};
}

extern "C" void fn_021d8494(void *object)
{
    Object *view = (Object *)object;
    if (*view->flag_1c != 0) {
        fn_02b616bc(view->member_48, (void *)fn_02b61950(view->member_48, view->owner));
    }
}
