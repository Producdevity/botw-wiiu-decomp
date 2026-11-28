extern "C" void fn_03bf6314(void*, void*, int, int);
extern "C" void fn_03bf6b10(void*);
extern "C" bool fn_03bf61f4(void*, int);

namespace {
struct Object {
    char unknown0[4];
    int first;
    char unknown1[12];
    int offset;
};
}

extern "C" void fn_03c0af04(Object* self) {
    char* link = 0;
    if (self->offset != 0) {
        link = reinterpret_cast<char*>(&self->offset) + self->offset;
    }
    fn_03bf6314(self, link, self->first, 1);
    fn_03bf6b10(self);
    fn_03bf61f4(self, 0);
}
