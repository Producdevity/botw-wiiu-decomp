namespace {
struct Object {
    char padding_0[0x4D8];
    int value_4d8;
    char member_4dc[1];
};
}

extern "C" bool fn_0378da88(void *);

extern "C" int fn_03610aac(void *object) {
    Object *view = (Object *)object;
    if (view->value_4d8 != 0 && fn_0378da88(view->member_4dc) != 0) {
        return 1;
    }
    return 0;
}
