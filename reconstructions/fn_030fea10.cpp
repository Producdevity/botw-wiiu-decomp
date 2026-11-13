namespace {
struct InferredObject {
    unsigned int value;
};
}

extern "C" void fn_030fea10(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value & ~ bits);
}
