namespace {
struct Object {
    char padding_0[0x20];
    int state;
    char padding_24[4];
    char flag;
};
}

extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_1014a290;

extern "C" void fn_0286fd84(void *self)
{
    Object *object = (Object *)self;
    fn_037b8284(self, &data_1014a290, 0);
    object->state = 1;
    object->flag = 0;
}
