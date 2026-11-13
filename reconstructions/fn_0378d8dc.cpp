namespace {
struct State { unsigned char padding[84]; unsigned char category; };
struct Object { unsigned char padding[60]; unsigned generation; State* state; };
}
extern "C" void* fn_0378d8dc(void* context, int index, unsigned char checked) {
    const Object* object = static_cast<const Object*>(context);
    if (index != -1 && object->generation == static_cast<unsigned>(index)) {
        State* state = object->state;
        if (checked)
            return state;
        if (state && state->category != 3)
            return state;
    }
    return 0;
}
