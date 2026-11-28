namespace {
struct Owner {
    char padding_0[0x1C];
    void (*notify)(void*);
};

struct Fields {
    char padding_0[0x10];
    unsigned char* kind;
    int id;
    Owner* owner;
};
}

extern "C" void fn_037946f0(void*, int, int, int, int, float);

extern "C" float data_10093278;

extern "C" void fn_0237a13c(void* object) {
    Fields* fields = (Fields*)object;
    fields->owner->notify(&fields->id);
    fn_037946f0(object, fields->id, *fields->kind, 0, 0, data_10093278);
}
