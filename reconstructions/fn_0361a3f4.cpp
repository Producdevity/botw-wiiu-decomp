namespace { struct Object { unsigned char padding[16]; unsigned first; unsigned second; unsigned third; }; }
extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0361a3f4(void* context) {
    if (!context)
        context = fn_0308e578(sizeof(Object));
    if (context) {
        Object* object = static_cast<Object*>(context);
        object->first = 0;
        object->third = 0;
        object->second = 0;
    }
    return context;
}
