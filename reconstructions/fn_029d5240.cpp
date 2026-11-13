namespace {
struct InferredState { unsigned char padding[28]; int value; };
struct InferredOwner { unsigned char padding[944]; InferredState* state; };
struct InferredObject { InferredOwner* owner; };
}

extern "C" bool fn_029d5240(const InferredObject* object) {
    InferredState* state = object->owner->state;
    if (state && state->value != 0 && state->value != 1) return true;
    return false;
}
