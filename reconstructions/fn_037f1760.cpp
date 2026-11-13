namespace {
struct InferredObject {
    unsigned char padding_0[208];
    unsigned int value;
};
}

extern "C" void fn_037f1760(InferredObject* object) {
    object->value = (static_cast<unsigned int>(object->value) & 0xfffdffffu);
}
