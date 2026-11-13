namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_02c0fb90(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value | bits);
}
