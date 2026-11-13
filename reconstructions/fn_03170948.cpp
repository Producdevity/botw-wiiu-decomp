namespace {
struct InferredObject {
    unsigned char padding_0[56];
    unsigned int value;
};
}

extern "C" void fn_03170948(InferredObject* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value | bits);
}
