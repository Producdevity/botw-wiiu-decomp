namespace {
struct Object {
    unsigned char padding_0[40];
    unsigned char first;
    unsigned char padding_29[4];
    unsigned char second;
};
}

extern "C" bool fn_02a353e8(const Object* object) {
    return object->first != 0 && object->second != 0;
}
