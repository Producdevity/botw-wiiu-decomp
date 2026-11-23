namespace {

struct Object {
    unsigned char prefix[0x328];
    void* value;
};

}

extern "C" bool fn_03797790(const void* object, int flag);

extern "C" void fn_03798804(void* object, void* value) {
    if (!fn_03797790(object, 5)) static_cast<Object*>(object)->value = value;
}
