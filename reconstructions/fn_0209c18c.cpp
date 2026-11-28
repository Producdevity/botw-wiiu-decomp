extern "C" void fn_03bb60c8(void *, float, float);
extern "C" const float data_10012ad8;
extern "C" int data_1049cd6c;

namespace {
struct Object {
    char padding_0[0xBEC];
    char member_bec[0x18];
    int value_c04;
};
}

extern "C" void fn_0209c18c(void *object)
{
    Object *view = (Object *)object;
    fn_03bb60c8(view->member_bec, data_10012ad8, data_10012ad8);
    view->value_c04 = data_1049cd6c;
}
