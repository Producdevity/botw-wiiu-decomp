namespace {
struct Object {
    char padding_0[0x3C];
    unsigned char flag;
};
}

extern "C" void fn_02670d08(void*);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);

extern "C" int data_10105884;

extern "C" void fn_02670dc8(void *object) {
    if (((Object *) object)->flag == 0) {
        fn_02670d08(object);
    }
    fn_037b8284(object, &data_10105884, 0);
}
