namespace {
struct Object {
    unsigned char padding_0[85];
    unsigned char second;
    unsigned char padding_56[22];
    unsigned char first;
};
}

extern "C" bool fn_022c7fb4(const Object* object) {
    return object->first == 0 && object->second != 0;
}
