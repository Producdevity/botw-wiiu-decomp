namespace {
struct Owner {
    char padding_0[0x1C];
    void (*notify)(void*);
};

struct Object {
    char padding_0[0x10];
    unsigned char* kind;
    int id;
    Owner* owner;
};
}

extern "C" void fn_037946f0(void*, int, int, int, int, float);

extern "C" float data_10093278;

extern "C" void fn_0237a13c(void* arg0) {
    Object* object = (Object*)arg0;
    object->owner->notify((char*)arg0 + 0x14);
    fn_037946f0(arg0, object->id, *object->kind, 0, 0, data_10093278);
}
