extern "C" int fn_03f0b7cc(void*, void*, void*);

namespace {
struct Object {
    int start;
    char padding_4[0x3C];
    int length;
    int mark;
    int end;
};
}

extern "C" void fn_03f0db30(void* object, void* first, void* second)
{
    int end = fn_03f0b7cc(object, first, second);
    Object* self = (Object*) object;
    self->end = end;
    self->mark = end;
    int* length = &self->length;
    *length = (short) ((end - self->start) >> 4);
}
