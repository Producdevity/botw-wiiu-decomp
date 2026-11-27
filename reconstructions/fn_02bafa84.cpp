namespace {
struct Object {
    void *owner;
    char padding_4[0x213];
    unsigned char use_owner;
};
}

extern "C" int fn_031f6990(void*);
extern "C" void fn_0378dc60(int, int);
extern "C" int data_1046407c;

extern "C" void fn_02bafa84(void *arg0, int arg1) {
    Object *object = (Object *) arg0;
    if (object->use_owner == 0) {
        fn_0378dc60(arg1, data_1046407c + 0x74);
        return;
    }
    fn_0378dc60(arg1, fn_031f6990(object->owner));
}
