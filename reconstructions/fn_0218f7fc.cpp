namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[64];
    InferredInner* inner;
};
}

extern "C" float fn_0218f7fc(const InferredObject* object) {
    return object->inner->value;
}
