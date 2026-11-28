namespace {
struct Object {
    char padding_0[0xE];
    unsigned short flags_e;
    char padding_10[2];
    unsigned short mask;
};
}

extern "C" int fn_0382facc(void *object, int index, int first_flag, int second_flag, int third_flag) {
    Object *view = (Object *) object;
    if (!(view->mask & (unsigned short) (1 << index)) && ((first_flag != 0) || ((second_flag == 0) && (third_flag != 0) && ((view->flags_e >> 9U) & 1)))) {
        return 1;
    }
    return 0;
}
