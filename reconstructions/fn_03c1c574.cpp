typedef signed char s8;

extern "C" void fn_0434c018(void*);

namespace {
struct Object {
    char padding_0[1];
    s8 flag_1;
    s8 flag_2;
    char padding_3[3];
    s8 flag_6;
    s8 flag_7;
    char padding_8[0x38];
    char member_40[0x58];
    char member_98[1];
};
}

extern "C" void fn_03c1c574(void *object) {
    Object *view = (Object *) object;
    view->flag_1 = 0;
    view->flag_2 = 0;
    fn_0434c018(view->member_40);
    view->flag_6 = 0;
    fn_0434c018(view->member_98);
    view->flag_7 = 0;
}
