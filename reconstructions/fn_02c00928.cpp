namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" void fn_02c00928(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
