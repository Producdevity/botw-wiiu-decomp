namespace { struct Object { void* owner; }; }
extern "C" void* fn_02b5bee0(void* context);
extern "C" bool fn_0378da88(void* context);
extern "C" unsigned char fn_028f1b94(void* context) {
    const Object* object = static_cast<const Object*>(context);
    return static_cast<unsigned char>(fn_0378da88(fn_02b5bee0(object->owner)) ^ 1u);
}
