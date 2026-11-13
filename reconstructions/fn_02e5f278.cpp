namespace {
struct InferredObject {
    unsigned char padding_0[312];
    unsigned char value;
};
}

extern "C" void fn_02e5f278(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
