namespace {
struct InferredObject {
    unsigned char padding_0[56];
    unsigned int value;
};
}

extern "C" void fn_03170948(void* raw, unsigned int bits) {
    InferredObject* object = static_cast<InferredObject*>(raw);
    object->value = static_cast<unsigned int>(object->value | bits);
}
