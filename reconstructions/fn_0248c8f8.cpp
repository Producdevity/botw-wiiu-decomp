namespace {
struct InferredThird { unsigned char padding[88]; void* value; };
struct InferredSecond { unsigned char padding[104]; InferredThird* inner; };
struct InferredObject { unsigned char padding[24]; InferredSecond* inner; };
}

extern "C" bool fn_0248c8f8(const InferredObject* object) {
    InferredSecond* inner = object->inner;
    if (inner && inner->inner) return inner->inner->value != 0;
    return false;
}
