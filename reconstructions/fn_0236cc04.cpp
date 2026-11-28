namespace {
struct Object {
    char padding_0[104];
    float value_68;
    char padding_6c[8];
    float value_74;
    char padding_78[8];
    float value_80;
};
}

extern "C" float data_10090fe0;
extern "C" int fn_0236cb50();

extern "C" int fn_0236cc04(void* object) {
    Object *view = (Object *) object;
    if (!(view->value_68 > data_10090fe0) || !(view->value_74 > data_10090fe0) || !(view->value_80 > data_10090fe0) || (fn_0236cb50() != 0)) {
        return 1;
    }
    return 0;
}
