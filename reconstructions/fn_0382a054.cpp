extern "C" float data_103236b0;
extern "C" float data_10323d94;
extern "C" unsigned char data_1047c4b4;

extern "C" void fn_0382a054(void* self)
{
    *(float*)((char*)self + 0x88) = data_103236b0;
    if (data_1047c4b4 == 0) {
        void* owner = *(void**)((char*)self + 4);
        if (owner != 0) {
            void* target = *(void**)((char*)owner + 0x3b0);
            if (target != 0 && *(signed char*)((char*)target + 0x25) == -1) {
                float value = *(float*)((char*)target + 0x28);
                if (value < data_10323d94)
                    *(float*)((char*)self + 0x88) = value;
            }
        }
    }
}
