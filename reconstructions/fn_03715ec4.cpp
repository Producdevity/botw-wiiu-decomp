namespace {
struct InferredInner {
    unsigned char padding_0[112];
    float value;
};

struct InferredObject {
    InferredInner* inner;
};
}

extern "C" float fn_03715ec4(const InferredObject* object) {
    return object->inner->value;
}
