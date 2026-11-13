namespace {
struct Object {
    unsigned char padding_0[12708];
    unsigned char first;
    unsigned char second;
};
}

extern "C" bool fn_02eaa544(const Object* object) {
    return object->first == 0 && object->second != 0;
}
