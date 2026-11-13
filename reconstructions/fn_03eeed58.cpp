namespace {
struct InferredObject {
    unsigned char value;
};
}

extern "C" void fn_03eeed58(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
