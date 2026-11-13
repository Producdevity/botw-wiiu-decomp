namespace {
struct InferredObject {
    unsigned char padding_0[1904];
    unsigned char value;
};
}

extern "C" void fn_02c10bf4(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
