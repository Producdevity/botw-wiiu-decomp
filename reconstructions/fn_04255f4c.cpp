namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" void fn_04255f4c(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
