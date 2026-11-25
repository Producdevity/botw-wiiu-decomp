extern "C" int fn_02d94010(void*);
extern "C" void fn_02ebccb8(void*);
extern "C" void* data_10469978;

extern "C" void fn_02cca05c(void** self)
{
    char* object = (char*)*self;
    if (*(unsigned char*)(object + 0x901) != 0) {
        if (fn_02d94010(object) != 0) {
            if (data_10469978 != 0) {
                fn_02ebccb8(data_10469978);
            }
        } else {
            object = (char*)*self;
            (*(void (**)(void*, int))(*(char**)(object + 0xE8) + 0x724))(object, 0);
        }
    }
}
